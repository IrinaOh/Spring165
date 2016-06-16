/*************************************************************
* File: birds.cpp
* Author: Edgar Wright
*
* Description: Contains the function bodies for the birds class.
* 
*************************************************************/
#include "birds.h"
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"



Bird::Bird()
{
}

Bird::~Bird()
{
}

Point Bird::getPoint()
{
	return Point();
}

Velocity Bird::getVelocity()
{
	return Velocity();
}

bool Bird::isAlive()
{
	return false;
}

void Bird::setPoint(Point p)
{
}

void Bird::setVelocity(Velocity v)
{
}

void Bird::kill()
{
}

void Bird::advance()
{
}

void Bird::draw()
{
}

int Bird::hit()
{
	return 0;
}
