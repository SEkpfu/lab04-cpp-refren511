#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double fun_fx(double x) {
	if (x < 0) {
		return 2 + (1 / 3);
	}
	else if (x >= 0 && x < 2 * M_PI) {
		return (x * x - 3);
	}
	else {
		return ((1 + x*x*x) / 2 * x);
	}
}

int main() {
	setlocale(0, "");
	//пункт а
	cout << "(a) Введите два числа: " << endl;
	int a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	double vr = 12.5 + fun_fx(2) - fun_fx(4) * fun_fx(10) + fun_fx(a) - fun_fx(b) + fun_fx(a * b);
	cout << "Ответ: " << vr << endl;

	//пункт b
	double xmass[7]; double ymass[7];
	double maxy = 0; int cntotr = 0;
	cout << "(b) Введите массив x: " << endl;
	for (int i = 0; i < 7; i++) {
		double k;
		cout << "x" << i + 1 << " = "; cin >> k;
		xmass[i] = k;
		ymass[i] = fun_fx(k);

		if (ymass[i] > maxy) {
			maxy = ymass[i];
		}
		if (ymass[i] < 0.0) {
			cntotr++;
		}
	}
	cout << "Количество отрицательных элементов в массиве y = " << cntotr << endl;
	cout << "Его максимальный элемент = " << maxy;
	return 0;
}