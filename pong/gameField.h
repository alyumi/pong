#pragma once

#include <string>
#include "plate.h"

#define WIDTH 20
#define LENGTH 30


class gameField
{
private:
	int cellwidth = 1;
	std::string field[WIDTH][LENGTH];

public:
	gameField();


	void draw();
	void addPlate(Plate plate, bool isLeft);
	void addBall();

	void setWIDTH(int width);
	void setLENGTH(int length);
	void setCellWidth(int cellwidth);


	int getWIDTH();
	int getLENGTH();
	int getCellWidth();
};

