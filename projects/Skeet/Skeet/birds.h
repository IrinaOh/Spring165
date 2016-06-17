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
#include "flyingObject.h"

class Bird : public FlyingObject 
{
public:
	Bird(Point p);
	~Bird();

	




private:

};


#endif // !BIRDS_H