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