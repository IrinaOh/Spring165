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

#include "flyingObject.h"


/**********************************************************************
* Function: Bird Class
* Purpose: Base bird object
**********************************************************************/
class Bird : public FlyingObject
{
public:
	Bird();

};

/**********************************************************************
* Function: Regular Bird Class
* Purpose: Regular bird object
**********************************************************************/
class Reg_Bird : public Bird
{
public:
	Reg_Bird() {}
	virtual void draw();
	virtual void advance(Bird & reg_bird) {};	
};

/**********************************************************************
* Function: Tough Bird Class
* Purpose: Tough bird object
**********************************************************************/
class T_Bird : public Bird
{
public:
	T_Bird();
	virtual void draw();
	virtual void advance(Bird & t_bird) {};
};

/**********************************************************************
* Function: Sacred Bird Class
* Purpose: Sacred bird object
**********************************************************************/
class S_Bird : public Bird
{
public:
	S_Bird() { bonus = -11; }
	virtual void draw();
	virtual void advance(Bird & s_bird) {};
};
#endif // !BIRDS_H