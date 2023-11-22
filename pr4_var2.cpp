#include <iostream>
#include <stdio.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y;
	bool getIntoArea = false;

	//Ввод данных
	printf("Введите координаты x, y:\n");
	scanf_s("%lf %lf", &x, &y);

	if ((y >= -1 && y <= 1) && (x >= -1.5 && x <= 2)) { //проверка, что точка входит в прямоугольник
		if (y >= 0) { 
			if (x > 0 && y >= (-0.5 * x + 1)) //проверка для четверти I
				getIntoArea = true;
			if (x <= 0 && y >= -(1 / 1.5) * x) //проверка для четверти II
				getIntoArea = true;
		}
		else { 
			if (x > 0 && y <= (0.5 * x - 1)) //проверка для четверти III
				getIntoArea = true;
			if (x <= 0 && y <= (1 / 1.5) * x) //проверка для четверти IV
				getIntoArea = true;
		}
	}
	if (getIntoArea) {
		printf("Точка (%6.3f ; %6.3f) ", x, y);
		printf("попадает в заштрихованную область");
	}
	else {
		printf("Точка (%6.3f ; %6.3f) ", x, y);
		printf("не попадает в заштрихованную область");
	}
	return 0;
}