#include <iostream>
using namespace std;

double summ(double, double);
double razn(double, double);
double mult(double, double);

int main() {
	setlocale(0, "");
	double a, b;
	cout << "Введите два числа:" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	double vr = summ(mult(5, summ(razn(a, 2), b)), mult(1000, a));
	cout << "Значение выражения = " << vr;
	return 0;
}

double summ(double a, double b) {
	return a + b;
}
double razn(double a, double b) {
	return  a - b;
}
double mult(double a, double b) {
	return a * b;
}