#include <iostream>
#include "Vector2d.h"
#include <cmath>
#include <string>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Vector2d A(2, 5, 1, 2);
	Vector2d B(4, 3);
	cout << "Вектор А: "; A.print();
	cout << "Вектор B: "; B.print();
	cout << "Сумма А+B = " << string(A + B) <<endl;
	cout << "Вычитание B-A = " << string(B - A)<<endl;
	cout << "Длина вектора B = " << B.length() << endl;
	cout << "Умножение вектора 'А' на число 2 = "; A.mult(2).print();
	cout << "А * B = " << (A * B) << endl;
	cout<< "Угол = "<< B.angle(A);
}

