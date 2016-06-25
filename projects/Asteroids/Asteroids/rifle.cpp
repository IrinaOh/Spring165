/*************************************************************
 * File: Ship.cpp
 * Author: Br. Burton
 *
 * Description: Contains the function bodies for the Ship class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "Ship.h"
#include "point.h"
#include "uiDraw.h"

#include <cassert>

void Ship :: draw() const
{
   assert(angle >= ANGLE_MIN);
   assert(angle <= ANGLE_MAX);
   
   drawRect(point, Ship_WIDTH, Ship_HEIGHT, 90 - angle);
}

void Ship :: moveLeft()
{
   angle -= Ship_MOVE_AMOUNT;

   if (angle < ANGLE_MIN)
   {
      angle = ANGLE_MIN;
   }
}


void Ship :: moveRight()
{
   angle += Ship_MOVE_AMOUNT;
   
   if (angle > ANGLE_MAX)
   {
      angle = ANGLE_MAX;
   }
}
