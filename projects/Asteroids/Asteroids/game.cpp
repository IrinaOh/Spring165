/*************************************************************
 * File: game.cpp
 * Author: Br. Burton
 *
 * Description: Contains the implementations of the
 *  method bodies for the game class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "game.h"
#include "Asteroids.h"

#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"

#include <vector>
using namespace std;

#define OFF_SCREEN_BORDER_AMOUNT 5


/***************************************
 * GAME CONSTRUCTOR
 ***************************************/
Game :: Game(Point tl, Point br)
 : topLeft(tl), bottomRight(br), Ship(br)
{
   // Set up the initial conditions of the game
   score = 0;

   // TODO: Set your Asteroid pointer to a good initial value (e.g., NULL)
   Asteroid = NULL;
}

/****************************************
 * GAME DESTRUCTOR
 ****************************************/
Game :: ~Game()
{
   // TODO: Check to see if there is currently a Asteroid allocated
   //       and if so, delete it.
	if (Asteroid != NULL)
	{
		delete Asteroid;
		Asteroid = NULL;
	}
}

/***************************************
 * GAME :: ADVANCE
 * advance the game one unit of time
 ***************************************/
void Game :: advance()
{
   advanceBullets();
   advanceAsteroid();

   handleCollisions();
   cleanUpZombies();
}

/***************************************
 * GAME :: ADVANCE BULLETS
 * Go through each bullet and advance it.
 ***************************************/
void Game :: advanceBullets()
{
   // Move each of the bullets forward if it is alive
   for (int i = 0; i < bullets.size(); i++)
   {
      if (bullets[i].isAlive())
      {
         // this bullet is alive, so tell it to move forward
         bullets[i].advance();
         
         if (!isOnScreen(bullets[i].getPoint()))
         {
            // the bullet has left the screen
            bullets[i].kill();
         }
         
      }
   }
}

/**************************************************************************
 * GAME :: ADVANCE Asteroid
 *
 * 1. If there is no Asteroid, create one with some probability
 * 2. If there is a Asteroid, and it's alive, advance it
 * 3. Check if the Asteroid has gone of the screen, and if so, "kill" it
 **************************************************************************/
void Game :: advanceAsteroid()
{
   if (Asteroid == NULL)
   {
      // there is no Asteroid right now, possibly create one
      
      // "resurrect" it will some random chance
      if (random(0, 30) == 0)
      {
         // create a new Asteroid
         Asteroid = createAsteroid();
      }
   }
   else
   {
      // we have a Asteroid, make sure it's alive
      if (Asteroid->isAlive())
      {
         // move it forward
         Asteroid->advance();
         
         // check if the Asteroid has gone off the screen
         if (!isOnScreen(Asteroid->getPoint()))
         {
            // We have missed the Asteroid
            Asteroid->kill();
         }
      }
   }
   
}

/**************************************************************************
 * GAME :: CREATE Asteroid
 * Create a Asteroid of a random type according to the rules of the game.
 **************************************************************************/
Asteroid* Game :: createAsteroid()
{
   Asteroid* newAsteroid = NULL;

   // TODO: Fill this in
   int ranAsteroid = random(0, 3);
   if (ranAsteroid == 0)
   {
	   newAsteroid = new Sml_Asteroid();
   }
   else if (ranAsteroid == 1)
   {
	   newAsteroid = new M_Asteroid();
   }
   else
   {
	   newAsteroid = new Lg_Asteroid();
   }


   return newAsteroid;
}

/**************************************************************************
 * GAME :: IS ON SCREEN
 * Determines if a given point is on the screen.
 **************************************************************************/
bool Game :: isOnScreen(const Point & point)
{
   return (point.getX() >= topLeft.getX() - OFF_SCREEN_BORDER_AMOUNT
      && point.getX() <= bottomRight.getX() + OFF_SCREEN_BORDER_AMOUNT
      && point.getY() >= bottomRight.getY() - OFF_SCREEN_BORDER_AMOUNT
      && point.getY() <= topLeft.getY() + OFF_SCREEN_BORDER_AMOUNT);
}

/**************************************************************************
 * GAME :: HANDLE COLLISIONS
 * Check for a collision between a Asteroid and a bullet.
 **************************************************************************/
void Game :: handleCollisions()
{
   // now check for a hit (if it is close enough to any live bullets)
   for (int i = 0; i < bullets.size(); i++)
   {
      if (bullets[i].isAlive())
      {
         // this bullet is alive, see if its too close

         // check if the Asteroid is at this point (in case it was hit)
         if (Asteroid != NULL && Asteroid->isAlive())
         {
            // BTW, this logic could be more sophisiticated, but this will
            // get the job done for now...
            if (fabs(bullets[i].getPoint().getX() - Asteroid->getPoint().getX()) < CLOSE_ENOUGH
                && fabs(bullets[i].getPoint().getY() - Asteroid->getPoint().getY()) < CLOSE_ENOUGH)
            {
               //we have a hit!
               
               // hit the Asteroid
               int points = Asteroid->hit();
               score += points;
               
               // the bullet is dead as well
               bullets[i].kill();
            }
         }
      } // if bullet is alive
      
   } // for bullets
}

/**************************************************************************
 * GAME :: CLEAN UP ZOMBIES
 * Remove any dead objects (take bullets out of the list, deallocate Asteroid)
 **************************************************************************/
void Game :: cleanUpZombies()
{
   // check for dead Asteroid
   if (Asteroid != NULL && !Asteroid->isAlive())
   {
      // the Asteroid is dead, but the memory is not freed up yet
      
      // TODO: Clean up the memory used by the Asteroid
	   delete Asteroid;
	   Asteroid = NULL;
  
   }
   
   // Look for dead bullets
   vector<Bullet>::iterator bulletIt = bullets.begin();
   while (bulletIt != bullets.end())
   {
      Bullet bullet = *bulletIt;
      // Asteroids Hint:
      // If we had a list of pointers, we would need this line instead:
      //Bullet* pBullet = *bulletIt;
      
      if (!bullet.isAlive())
      {
         // If we had a list of pointers, we would need to delete the memory here...
         
         
         // remove from list and advance
         bulletIt = bullets.erase(bulletIt);
      }
      else
      {
         bulletIt++; // advance
      }
   }
   
}

/***************************************
 * GAME :: HANDLE INPUT
 * accept input from the user
 ***************************************/
void Game :: handleInput(const Interface & ui)
{
   // Change the direction of the Ship
   if (ui.isLeft())
   {
      Ship.moveLeft();
   }
   
   if (ui.isRight())
   {
      Ship.moveRight();
   }
   
   // Check for "Spacebar
   if (ui.isSpace())
   {
      Bullet newBullet;
      newBullet.fire(Ship.getPoint(), Ship.getAngle());
      
      bullets.push_back(newBullet);
   }
}

/*********************************************
 * GAME :: DRAW
 * Draw everything on the screen
 *********************************************/
void Game :: draw(const Interface & ui)
{
   // draw the Asteroid
	//Asteroid->draw();
   // TODO: Check if you have a valid Asteroid and if it's alive
   // then call it's draw method
	if (Asteroid != NULL && Asteroid->isAlive())
	{
		Asteroid->draw();
   }
  

   // draw the Ship
   Ship.draw();
   
   // draw the bullets, if they are alive
   for (int i = 0; i < bullets.size(); i++)
   {
      if (bullets[i].isAlive())
      {
         bullets[i].draw();
      }
   }
   
   // Put the score on the screen
   Point scoreLocation;
   scoreLocation.setX(topLeft.getX() + 5);
   scoreLocation.setY(topLeft.getY() - 5);
   
   drawNumber(scoreLocation, score);

}

