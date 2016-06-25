#ifndef FLYING_OBJECT_H
#define FLYING_OBJECT_H


// Put your FlyingObject class here
#include <iostream>
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"
class FlyingObject
{
protected:
	Velocity velocity;
	Point point;
	bool alive;
	int lives;
	int score;
	int bonus;



public:
	FlyingObject() : alive(true), score(1), bonus(0), lives(1) {}


	/*********************************************
	* Function: getPoint
	* Description: returns the Asteroid's location
	*********************************************/
	Point getPoint() { return point; }

	/*********************************************
	* Function: getVelocity
	* Description: returns the Asteroid's velocity
	*********************************************/
	Velocity getVelocity() { return velocity; }

	/*********************************************
	* Function: isAlive
	* Description: Returns if the Asteroid is alive
	*********************************************/
	bool isAlive() { return alive; }

	/*********************************************
	* Function: getLives
	* Description: Returns if the Asteroid's lives
	*********************************************/
	int getLives() { return lives; }

	/*********************************************
	* Function: setPoint
	* Description: Sets the Asteroid's point
	*********************************************/
	void setPoint(Point point) { this->point = point; }

	/*********************************************
	* Function: setVelocity
	* Description: Sets the Asteroid's velocity
	*********************************************/
	void setVelocity(Velocity velocity) { this->velocity = velocity; }

	/*********************************************
	* Function: setAlive
	* Description: sets the Asteroid to alive
	*********************************************/
	void setAlive(bool alive) { this->alive = alive; }

	/*********************************************
	* Function: setLives
	* Description: sets the Asteroid's life
	*********************************************/
	void setLives(int lives) { this->lives = lives; }

	/*********************************************
	* Function: kill
	* Description: kills the Asteroid
	*********************************************/
	void kill() { alive = false; }

	virtual void draw() = 0;

	virtual void advance();

	/*********************************************
	* Function: hit
	* Description: keeps track of Asteroid hits
	*********************************************/
	int hit();

	
};

#endif FLYING_OBJECT_H
