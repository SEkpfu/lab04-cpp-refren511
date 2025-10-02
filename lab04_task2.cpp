#include <iostream>
#include <cmath>
using namespace std;

double fun_r(double x1, double y1, double x2, double y2);
double fun_s_tr(double a, double b, double c);
double fun_s_chet(double a, double b, double c1, double c2, double d);

int main() {
	setlocale(0, "");
	double x1, x2, x3, x4, y1, y2, y3, y4;
	double x0 = 0.0; double y0 = 0.0;
	cout << "Введите координаты двух точек (x, y):" << endl;
	cout << "Первая точка = "; cin >> x1; cin >> y1;
	cout << "Вторая точка = "; cin >> x2; cin >> y2;
	cout << "Третья точка = "; cin >> x3; cin >> y3;
	cout << "Четвёртая точка = "; cin >> x4; cin >> y4;
	double a = fun_r(x1, y1, x2, y2);
	double b = fun_r(x2, y2, x3, y3);
	double c1 = fun_r(x1, y1, x3, y3);
	double c2 = fun_r(x3, y3, x4, y4);
	double d = fun_r(x1, y1, x4, y4);

	//пункт а
	cout << "Длина отрезка, соединяющего эти точки = " << a << endl;

	//пункт b
	cout << "Расстояние первой точки до начала координат = " << fun_r(x1, y1, x0, y0) << endl;
	cout << "Расстояние второй точки до начала координат = " << fun_r(x2, y2, x0, y0) << endl;

	//пункт c
	cout << "Площадь треугольника с вершинами в этих точках = " << fun_s_tr(a, b, c1) << endl;
	
	//пункт d
	cout << "Площадь четырехугольника с вершинами в этих точках = " << fun_s_chet(a, b, c1, c2, d) << endl;
	return 0;
}

double fun_r(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double fun_s_tr(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double fun_s_chet(double a, double b, double c1, double c2, double d) {
	double s1 = fun_s_tr(a, b, c1);
	double s2 = fun_s_tr(c1, c2, d);
	return (s1 + s2);
}