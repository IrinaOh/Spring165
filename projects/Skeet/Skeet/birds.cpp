/*************************************************************
* File: birds.cpp
* Author: Edgar Wright
*
* Description: Contains the function bodies for the birds class.
* 
*************************************************************/
#include "birds.h"

/**********************************************************************
* Function: Bird Constructor
* Purpose: Sets up the bird
**********************************************************************/
Bird::Bird()
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
* Function: Reg_Bird::draw()
* Purpose: Draws the reg bird
**********************************************************************/
void Reg_Bird::draw()
{
	drawLargeAsteroid(getPoint(), 15);
}

/**********************************************************************
* Function: Tough Bird Constructor
* Purpose: Set perameters of the tough bird functionality
**********************************************************************/
T_Bird::T_Bird()
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
* Function: T_Bird::draw()
* Purpose: draw the tough bird
**********************************************************************/
void T_Bird::draw()
{
	drawMediumAsteroid(getPoint(), 15);
}

/**********************************************************************
* Function: S_Bird::draw
* Purpose: Draws the sacred bird
**********************************************************************/
void S_Bird::draw()
{
	drawLander(getPoint());
}



