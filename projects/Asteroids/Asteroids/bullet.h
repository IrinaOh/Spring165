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

#include <cmath>
#include "flyingObject.h"

#define M_PI 3.14

class Bullet : public FlyingObject
{
public:
	Bullet() {};

	void fire(Point point, float angle);
	virtual void draw();
	virtual void advance();



private:
	float angle;


};

#endif // !BULLET_H