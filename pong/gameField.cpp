#include "gameField.h"

void gameField::draw()
{
	for (int i = 0; i < gameField::WIDTH; i++) {
		for (int j = 0; j < gameField::LENGTH; j++) {
			std::cout << "hi";
		}
	}
	
}

void gameField::addPlate(Plate plate, bool isLeft)
{
}

void gameField::addBall()
{
}

void gameField::setWIDTH(int width)
{
	gameField::WIDTH = width;
}

void gameField::setLENGTH(int length)
{
	gameField::LENGTH = length;
}

void gameField::setCellWidth(int cellwidth)
{
	gameField::cellwidth = cellwidth;
}

int gameField::getWIDTH()
{
	return gameField::WIDTH;
}

int gameField::getLENGTH()
{
	return gameField::LENGTH;
}

int gameField::getCellWidth()
{
	return gameField::cellwidth;
}
