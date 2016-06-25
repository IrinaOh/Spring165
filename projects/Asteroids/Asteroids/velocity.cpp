/***********************************************************************
* Implementation File:
*    Velocity : A class representing the velocity of the lunar lander
* Author:
*    Edgar Wright
* Summary:
*    Everything you needed to know about the lander's velocity
*	 but were afraid to ask
************************************************************************/
#include "velocity.h"

/**********************************************************************
* Function: reset()
* Purpose: Resets the velocity variables for a new instance of velocity
**********************************************************************/
void Velocity::setV(float newDx, float newDy)
{
	dx = dx + newDx;
	dy = dy + newDy;
}
