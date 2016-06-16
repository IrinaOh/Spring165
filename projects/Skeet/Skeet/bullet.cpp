/*************************************************************
* File: bullet.cpp
* Author: Edgar Wright
*
* Description: Contains the function bodies for the bullet class.
*
*************************************************************/
#include "bullet.h"
#include <cmath> // used for sin, cos, and M_PI



#define BULLET_SPEED 10.0
float angle = 60.0;

float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

Bullet::Bullet()
{
}

Bullet::~Bullet()
{
}

Point Bullet::getPoint()
{
	return Point();
}

Velocity Bullet::getVelocity()
{
	return Velocity();
}

bool Bullet::isAlive()
{
	return false;
}

void Bullet::setPoint(Point p)
{
}

void Bullet::setVelocity(Velocity v)
{
}

void Bullet::kill()
{
}

void Bullet::advance()
{
}

void Bullet::draw()
{
}

void Bullet::fire(Point point, float angle)
{
}
