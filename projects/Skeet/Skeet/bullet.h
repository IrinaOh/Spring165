/***********************************************************************
* Header File:
*    Bullet : Defines the bullets needed for skeet
* Author:
*    Edgar Wright
* Summary:
*	 THe file contains the classes needed for the bullets.
************************************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "point.h"
#include "velocity.h"

class Bullet
{
public:
	Bullet();
	~Bullet();


	/*********************************************
	* Function: advance
	* Description: Moves the bullet forward one
	* step at a time.
	*********************************************/
	void advance();

	/*********************************************
	* Function: draw
	* Description: draws the bullets
	*********************************************/
	void draw();

	/*********************************************
	* Function: fire
	* Description: fires the bullets
	*********************************************/
	void fire(Point point, float angle);



private:


};

#endif // !BULLET_H