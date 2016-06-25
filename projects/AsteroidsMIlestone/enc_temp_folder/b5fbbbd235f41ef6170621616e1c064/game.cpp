/*********************************************************************
 * File: game.cpp
 * Description: Contains the implementaiton of the game class
 *  methods.
 *
 *********************************************************************/

#include "game.h"


// These are needed for the getClosestDistance function...
#include <limits>
#include <algorithm>
using namespace std;


// You may find this function helpful...

/**********************************************************
 * Function: getClosestDistance
 * Description: Determine how close these two objects will
 *   get in between the frames.
 **********************************************************/
/*
float Game :: getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const
{
   // find the maximum distance traveled
   float dMax = max(abs(obj1.getVelocity().getDx()), abs(obj1.getVelocity().getDy()));
   dMax = max(dMax, abs(obj2.getVelocity().getDx()));
   dMax = max(dMax, abs(obj2.getVelocity().getDy()));
   dMax = max(dMax, 0.1f); // when dx and dy are 0.0. Go through the loop once.
   
   float distMin = std::numeric_limits<float>::max();
   for (float i = 0.0; i <= dMax; i++)
   {
      Point point1(obj1.getPoint().getX() + (obj1.getVelocity().getDx() * i / dMax),
                     obj1.getPoint().getY() + (obj1.getVelocity().getDy() * i / dMax));
      Point point2(obj2.getPoint().getX() + (obj2.getVelocity().getDx() * i / dMax),
                     obj2.getPoint().getY() + (obj2.getVelocity().getDy() * i / dMax));
      
      float xDiff = point1.getX() - point2.getX();
      float yDiff = point1.getY() - point2.getY();
      
      float distSquared = (xDiff * xDiff) +(yDiff * yDiff);
      
      distMin = min(distMin, distSquared);
   }
   
   return sqrt(distMin);
}
*/

Game::Game(Point tl, Point br)
{
	rock = NULL;
}


Game::~Game()
{
}

void Game::handleInput(const Interface & ui)
{
}

void Game::advance()
{
	if (rock == NULL)
	{
		// there is no bird right now, possibly create one

		// "resurrect" it will some random chance
		if (random(0, 30) == 0)
		{
			// create a new bird
			rock = createRock();
		}
	}
	else
	{
		// we have a bird, make sure it's alive
		if (rock->isAlive())
		{
			// move it forward
			rock->advance();

			// check if the bird has gone off the screen
			if (!isOnScreen(rock->getPoint()))
			{
				// We have missed the bird
				rock->kill();
			}
		}
	}
}

Rock* Game::createRock()
{
	Rock* newRock = NULL;

	newRock = new BigRock();

	return newRock;
}


bool Game :: isOnScreen(const Point & point)
{
	return (point.getX() >= topLeft.getX()
		&& point.getX() <= bottomRight.getX()
		&& point.getY() >= bottomRight.getY()
		&& point.getY() <= topLeft.getY());
}

void Game :: draw(const Interface & ui)
{
	for (int i = 0; i < 6; i++)
	{
		rock->draw();
	}

}
void Game::advanceBullets()
{
}

void Game::advanceRock()
{
	rock = createRock();
}


void Game::handleCollisions()
{
}

void Game::cleanUpZombies()
{
}
