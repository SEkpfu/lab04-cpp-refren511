#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double find_s(int a, int h) {
	return ((a * h) / 2.0);
}

double find_s(int a, int b, int ang) {
	return (a * b * sin(M_PI * ang / 180.0)) / 2.0;
}

double find_s(double a, double b, double c) {
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	setlocale(0, "");
	int i; 
	double s = 0;
	cout << "Способ расчёта площади треугольника = "; cin >> i;
	switch (i) {
	case 1: {
		int a, h;
		cout << "Введите сторону и высоту (целые числа):" << endl;
		cout << "a = "; cin >> a;
		cout << "h = "; cin >> h;
		s = find_s(a, h);
		break;
	}
	case 2:{
		int a, b, ang;
		cout << "Введите две стороны и угол между ними (целые числа, угол задается в градусах):" << endl;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "angle = "; cin >> ang;
		s = find_s(a, b, ang);
		break;
	}
	case 3: {
		double a, b, c;
		cout << "Введите три стороны: ";
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "c = "; cin >> c;
		s = find_s(a, b, c);
		break;
	}
	default:
		cout << "Некооретный ввод";
		return 1;
	}
	cout << "Ответ: S = " << s;
	return 0;
}
