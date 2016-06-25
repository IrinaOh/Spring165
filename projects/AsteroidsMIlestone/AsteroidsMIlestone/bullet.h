#ifndef bullet_h
#define bullet_h

#define BULLET_SPEED 5
#define BULLET_LIFE 40



// Put your Bullet class here
#include <cmath>
#include "flyingObject.h"

#define M_PI 3.14

class Bullet : public FlyingObject
{
public:
	Bullet() {};

	void fire(Point point, float angle);
	virtual void draw();
	virtual void advance();



private:
	float angle;


};



#endif /* bullet_h */
