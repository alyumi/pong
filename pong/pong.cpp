// pong.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

#include "gameField.h"
#include "plate.h"

using namespace std;

int main()
{
    gameField field;
    field.draw();
    Plate left{1, true};
    Plate right{ 1, false };
}

