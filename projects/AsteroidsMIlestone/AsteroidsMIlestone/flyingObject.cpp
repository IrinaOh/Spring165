#include "flyingObject.h"


// Put your FlyingObject method bodies here



void FlyingObject::advance()
{
	point.addX(velocity.getDx());
	point.addY(velocity.getDy());
}

int FlyingObject::hit()
{
	lives--;
	if (lives == 0)
	{
		kill();
		return score + bonus;
	}
	return score;
	return 0;
}
