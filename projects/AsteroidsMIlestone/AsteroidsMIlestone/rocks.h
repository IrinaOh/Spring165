#ifndef rocks_h
#define rocks_h

#define BIG_ROCK_SIZE 16
#define MEDIUM_ROCK_SIZE 8
#define SMALL_ROCK_SIZE 4

#define BIG_ROCK_SPIN 2
#define MEDIUM_ROCK_SPIN 5
#define SMALL_ROCK_SPIN 10

#include "flyingObject.h"
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"

// Define the following classes here:
//   Rock
class Rock : public FlyingObject
{
public:
	Rock();

};


//   BigRock
class BigRock : public Rock
{
public:
	BigRock() {};
	virtual void draw();
	virtual void advance(Rock & bigRock) {};
};

//   MediumRock
class MediumRock : public Rock
{
public:
	MediumRock() {};
	virtual void draw();
	virtual void advance(Rock & mediumRock) {};
};


//   SmallRock
class SmallRock : public Rock
{
public:
	SmallRock() {};
	virtual void draw();
	virtual void advance(Rock & smallRock) {};
};

#endif /* rocks_h */
