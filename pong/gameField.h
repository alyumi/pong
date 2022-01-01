#pragma once

#include "header.h"

class gameField
{
private:
	int WIDTH = 20;
	int LENGTH = 30;
	int cellwidth = 1;

public:
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

