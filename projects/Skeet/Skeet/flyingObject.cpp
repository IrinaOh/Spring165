#include "flyingObject.h"


// Put your FlyingObject method bodies here

/**********************************************************************
* Function: hit()
* Purpose: keeps track of hits and kills bird
**********************************************************************/
int FlyingObject::hit()
{
	lives--;
	if (lives ==0)
	{
		kill();
		return score + bonus;
	}
	return score;
}

/**********************************************************************
* Function: advance()
* Purpose: Advances the fling object
**********************************************************************/
void FlyingObject::advance()
{
	point.addX(velocity.getDx());
	point.addY(velocity.getDy());
}