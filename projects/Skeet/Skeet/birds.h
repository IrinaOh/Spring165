/***********************************************************************
* Header File:
*    Birds : Defines the birds needed for skeet
* Author:
*    Edgar Wright
* Summary:
*	 THe file contains the classes needed for the birds.    
************************************************************************/
#ifndef BIRDS_H
#define BIRDS_H

#include "point.h"
#include "uiDraw.h"
#include "velocity.h"

class Bird
{
public:
	Bird();
	~Bird();

	/*********************************************
	* Function: getPoint
	* Description: returns the bird's location
	*********************************************/
	Point getPoint();

	/*********************************************
	* Function: getVelocity
	* Description: returns the bird's velocity
	*********************************************/
	Velocity getVelocity();

	/*********************************************
	* Function: isAlive
	* Description: Returns if the bird is alive
	*********************************************/
	bool isAlive();

	/*********************************************
	* Function: setPoint
	* Description: Sets the bird's point
	*********************************************/
	void setPoint(Point p);

	/*********************************************
	* Function: setVelocity
	* Description: Sets the bird's velocity
	*********************************************/
	void setVelocity(Velocity v);

	/*********************************************
	* Function: kill
	* Description: kills the bird
	*********************************************/
	void kill();

	/*********************************************
	* Function: advance
	* Description: Moves the bird forward one
	* step at a time.
	*********************************************/
	void advance();

	/*********************************************
	* Function: draw
	* Description: draws the birds
	*********************************************/
	void draw();

	/*********************************************
	* Function: hit
	* Description: keeps track of bird hits
	*********************************************/
	int hit();

private:

};


#endif // !BIRDS_H