#include <iostream>
using namespace std;

double srzn(double a1, double a2) {
	return (a1 + a2) / 2.0;
}

double srzn(double a1, double a2, double a3) {
	return (a1 + a2 + a3) / 3.0;
}

double srzn(double a1, double a2, double a3, double a4) {
	return (a1 + a2 + a3 + a4) / 4.0;
}


int main() {
	setlocale(0, "");
	int n;
	double a1, a2, a3, a4;
	cout << "Введите кол-во вещественных аргументов (2, 3, 4) = "; cin >> n;
	switch (n) {
	case 2:
		cout << "Введите два числа: "; cin >> a1 >> a2;
		cout << "Среднее арифмитеское = " << srzn(a1, a2);
		break;
	case 3:
		cout << "Введите три числа: "; cin >> a1 >> a2 >> a3;
		cout << "Среднее арифмитеское = " << srzn(a1, a2, a3);
		break;
	case 4:
		cout << "Введите четыре числа: "; cin >> a1 >> a2 >> a3 >> a4;
		cout << "Среднее арифмитеское = " << srzn(a1, a2, a3, a4);
		break;
	default:
		cout << "Введено некорретное кол-во аргументов";
		break;
	}
	return 0;
}