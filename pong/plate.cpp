#include "plate.h"
#include <conio.h>

Plate::transform Plate::setTransform(int x, int y)
{
	return transform();
}

int Plate::setSpeed(int speed)
{
	return 0;
}

Plate::inputKeys Plate::setInputKeys(int up, int down, int boost)
{
	return inputKeys();
}

void Plate::getTransform()
{
	return transform;
}

void Plate::getSpeed()
{
}

void Plate::getInputKeys()
{
}

Plate::Plate(int spd, bool isLeft)
{
	setSpeed(spd);
	if (isLeft) {
		setTransform(1, 8);
		setInputKeys(87, 83, 67);
	}
	else {
		setTransform(28, 8);
		setInputKeys(73, 75, 77);
	}
}
