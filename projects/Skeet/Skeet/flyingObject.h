#ifndef flyingObject_h
#define flyingObject_h




// Put your FlyingObject class here
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"

class FlyingObject
{
public:
	FlyingObject();
	~FlyingObject();



/*********************************************
* Function: getPoint
* Description: returns the bird's location
*********************************************/
Point getPoint();

/*********************************************
* Function: getVelocity
* Description: returns the bird's velocity
*********************************************/
Velocity getVelocity();

/*********************************************
* Function: isAlive
* Description: Returns if the bird is alive
*********************************************/
bool isAlive();

/*********************************************
* Function: setPoint
* Description: Sets the bird's point
*********************************************/
void setPoint(Point p);

/*********************************************
* Function: setVelocity
* Description: Sets the bird's velocity
*********************************************/
void setVelocity(Velocity v);

/*********************************************
* Function: kill
* Description: kills the bird
*********************************************/
void kill();

virtual void draw();

virtual void advance();

/*********************************************
* Function: fire
* Description: fires the bullets
*********************************************/
virtual void fire(Point point, float angle);

/*********************************************
* Function: hit
* Description: keeps track of bird hits
*********************************************/
virtual int hit();

private:

};

#endif /* FlyingObject_h */
