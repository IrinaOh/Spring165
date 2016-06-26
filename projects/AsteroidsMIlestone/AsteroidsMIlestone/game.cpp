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
	
}


Game::~Game()
{
}

void Game::handleInput(const Interface & ui)
{
}

void Game::advance()
{
	
}

void Game :: createRock()
{
	for (int i = 0; i < 5; i++)
	{
		Rock* newRock;
		newRock = new BigRock();
		rocks.push_back(newRock);

	}
	
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
	for (vector <Rock*> :: iterator it = rocks.begin(); it != rocks.end(); ++it)
	{
		(*it)->draw();
		
		
	}

}
void Game :: advanceBullets()
{
}

void Game :: advanceRock()
{

}


void Game :: handleCollisions()
{
}

void Game :: cleanUpZombies()
{
}
