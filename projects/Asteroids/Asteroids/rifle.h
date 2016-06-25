/*************************************************************
 * File: Ship.h
 * Author: Br. Burton
 *
 * Description: Defines a Ship.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef Ship_H
#define Ship_H

#include "point.h"

#define Ship_WIDTH 5
#define Ship_HEIGHT 40

#define ANGLE_MAX 90
#define ANGLE_MIN 0
#define ANGLE_START 45

#define Ship_MOVE_AMOUNT 3

class Ship
{
private:
   Point point;

   /**********************************************************
    * angle - The angle of the Ships in degrees.
    *  Assumes that straight right is 0 degrees and up is 90.
    **********************************************************/
   float angle;
   
   
public:
   Ship(const Point & point) : point(point) { angle = ANGLE_START; }
   
   /****************
    * Basic Getters
    ****************/
   float getAngle() const { return angle; }
   Point getPoint() const { return point; }
   
   /*****************
    * Drawing
    *****************/
   void draw() const;

   /*****************
    * Movement
    *****************/
   void moveLeft();
   void moveRight();
   
};

#endif
