/***********************************************************************
* Header File:
*    Asteroids : Defines the Asteroids needed for skeet
* Author:
*    Edgar Wright
* Summary:
*	 THe file contains the classes needed for the Asteroids.    
************************************************************************/
#ifndef AsteroidS_H
#define AsteroidS_H

#include "flyingObject.h"


/**********************************************************************
* Function: Asteroid Class
* Purpose: Base Asteroid object
**********************************************************************/
class Asteroid : public FlyingObject
{
public:
	Asteroid();

};

/**********************************************************************
* Function: Regular Asteroid Class
* Purpose: Regular Asteroid object
**********************************************************************/
class Sml_Asteroid : public Asteroid
{
public:
	Sml_Asteroid() {}
	virtual void draw();
	virtual void advance(Asteroid & reg_Asteroid) {};	
};

/**********************************************************************
* Function: Tough Asteroid Class
* Purpose: Tough Asteroid object
**********************************************************************/
class M_Asteroid : public Asteroid
{
public:
	M_Asteroid();
	virtual void draw();
	virtual void advance(Asteroid & t_Asteroid) {};
};

/**********************************************************************
* Function: Sacred Asteroid Class
* Purpose: Sacred Asteroid object
**********************************************************************/
class Lg_Asteroid : public Asteroid
{
public:
	Lg_Asteroid() { bonus = -11; }
	virtual void draw();
	virtual void advance(Asteroid & s_Asteroid) {};
};
#endif // !AsteroidS_H