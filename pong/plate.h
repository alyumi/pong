#pragma once

class Plate {

private:
	int speed;
	struct transform {
		int x;
		int y;
	};

	struct inputKeys {
		char up;
		char down;
		char boost;
	};

public:
	transform setTransform(int x, int y);
	int setSpeed(int speed);
	inputKeys setInputKeys(int up, int down, int boost);

	void getTransform();
	void getSpeed();
	void getInputKeys();

	Plate(int spd, bool isLeft);
};