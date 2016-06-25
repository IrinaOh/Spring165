/*************************************************************
* File: Asteroids.cpp
* Author: Edgar Wright
*
* Description: Contains the function bodies for the Asteroids class.
* 
*************************************************************/
#include "Asteroids.h"

/**********************************************************************
* Function: Asteroid Constructor
* Purpose: Sets up the Asteroid
**********************************************************************/
Asteroid::Asteroid()
{
	point.setX(-200.0);
	point.setY(random(-150, 150));

	velocity.setDx(random(3, 6));

	if (point.getY() >= 0)
	{
		velocity.setDy(random(-4, 0));
	}
	else
	{
		velocity.setDy(random(0, 4));
	}
}

/**********************************************************************
* Function: Reg_Asteroid::draw()
* Purpose: Draws the reg Asteroid
**********************************************************************/
void Sml_Asteroid::draw()
{
	drawCircle(getPoint(), 15);
}

/**********************************************************************
* Function: Tough Asteroid Constructor
* Purpose: Set perameters of the tough Asteroid functionality
**********************************************************************/
T_Asteroid::T_Asteroid()
{
	lives = 3;
	bonus = 2;

	velocity.setDx(random(2, 4));

	if (point.getY() >= 0)
	{
		velocity.setDy(random(-3, 0));
	}
	else
	{
		velocity.setDy(random(0, 3));
	}
}

/**********************************************************************
* Function: T_Asteroid::draw()
* Purpose: draw the tough Asteroid
**********************************************************************/
void T_Asteroid::draw()
{
	drawToughAsteroid(getPoint(), 15, lives);
}

/**********************************************************************
* Function: S_Asteroid::draw
* Purpose: Draws the sacred Asteroid
**********************************************************************/
void S_Asteroid::draw()
{
	drawSacredAsteroid(getPoint(), 15);
}



