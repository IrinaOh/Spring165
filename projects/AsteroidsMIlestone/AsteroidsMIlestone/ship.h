#ifndef ship_h
#define ship_h

#define SHIP_SIZE 10

#define ROTATE_AMOUNT 6
#define THRUST_AMOUNT 0.5

#include "point.h"

// Put your Ship class here
class Ship
{
public:
	Ship();
	~Ship();
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


private:
	Point point;
	float angle;

};



#endif /* ship_h */
