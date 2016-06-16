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
	* Function: getPoint
	* Description: returns the bullet's location
	*********************************************/
	Point getPoint();

	/*********************************************
	* Function: getVelocity
	* Description: returns the bullet's velocity
	*********************************************/
	Velocity getVelocity();

	/*********************************************
	* Function: isAlive
	* Description: Returns if the bullet is alive
	*********************************************/
	bool isAlive();

	/*********************************************
	* Function: setPoint
	* Description: Sets the bullet's point
	*********************************************/
	void setPoint(Point p);

	/*********************************************
	* Function: setVelocity
	* Description: Sets the bullet's velocity
	*********************************************/
	void setVelocity(Velocity v);

	/*********************************************
	* Function: kill
	* Description: kills the bullet
	*********************************************/
	void kill();

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