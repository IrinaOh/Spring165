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
#include "flyingObject.h"

class Bullet : public FlyingObject
{
public:
	Bullet();
	~Bullet();




private:


};

#endif // !BULLET_H