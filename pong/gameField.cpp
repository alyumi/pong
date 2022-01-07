#include <iostream>
#include "gameField.h"

gameField::gameField()
{
	int n = LENGTH;
	for (int i = 0; i < WIDTH; ++i) {
		for (int j = 0; j < LENGTH;  ++j) {
			gameField::field[i][j] = "[] ";
		}
		gameField::field[i][n- 1] += "\n";
	}
}

void gameField::draw()
{
	for (int i = 0; i < WIDTH; ++i) {
		for (int j = 0; j < LENGTH; ++j) {
			std::cout << gameField::field[i][j];
		}
	}
	std::cout << "\n";
}

void gameField::addPlate(Plate plate, bool isLeft)
{
}

void gameField::addBall()
{
}

void gameField::setWIDTH(int width)
{
	// Not needed
}

void gameField::setLENGTH(int length)
{
	// Not needed
}

void gameField::setCellWidth(int cellwidth)
{
	gameField::cellwidth = cellwidth;
}

int gameField::getWIDTH()
{
	return WIDTH;
}

int gameField::getLENGTH()
{
	return LENGTH;
}

int gameField::getCellWidth()
{
	return gameField::cellwidth;
}
