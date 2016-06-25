#include "rocks.h"

// Put your Rock methods here

Rock::Rock()
{
	point.setX(random(-150, 150));
	point.setY(random(-150, 150));

	velocity.setDx(random(3, 6));

	if (point.getY() >= 0)
	{
		velocity.setDy(random(-4, 0));
	}
	else
	{
		velocity.setDy(random(0, 4));
	}
}

void BigRock::draw()
{
	drawLargeAsteroid(point, BIG_ROCK_SPIN);
}

void MediumRock::draw()
{
	drawMediumAsteroid(getPoint(), MEDIUM_ROCK_SPIN);
}

void SmallRock::draw()
{
	drawSmallAsteroid(getPoint(), SMALL_ROCK_SPIN);

}
