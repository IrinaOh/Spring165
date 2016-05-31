/***********************************************************************
* Header File:
*    LANDER : A class representing the lunar lander
* Author:
*    Edgar Wright
* Summary:
*    Everything you needed to know about the lander but were afraid to ask
************************************************************************/

#ifndef LANDER_H
#define LANDER_H

#include "point.h" 

/********************************************
* LANDER
* Vehical for landing on the cheese
********************************************/
class Lander
{
public:
	Lander(Point point);

	~Lander()
	{
		delete [] lander;
	};

private:

};

Lander::Lander()
{
}

Lander::~Lander()
{
}


#endif
