#include <iostream>
using namespace std;

double fx(double x, double& res) {
	if (x <= 2) {
		if (x == 1 || x == 0) {
			return 0;
		}
		else {
			res = (2 * x + 1 / (1 - x)) / 3 * x;
			return 1;
		}
		
	}
	else if (x > 2 && x <= 5){
		res = 10 + 2.0 / 7.0;
		return 1;
	}
	else {
		res = -3 - x;
		return 1;
	}
}

int main() {
	setlocale(0, "");
	double res1, res2, res3, res4, res5, res6, ress1, ress2, a, b;
	cout << "Введите два числа:" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << "(1) - ";
	if (fx(2, res1) && fx(0, res2) && fx(a, res3)) {
		ress1 = res1 - res2 * res3;
		cout << ress1 << endl;
	}
	else {
		cout << "Ошибка: невозожно вычислить" << endl;
	}

	cout << "(2) - ";
	if (fx(2 * a, res4) && fx(6, res5) && fx(a * b, res6)) {
		ress2 = res4 - res5 + res6;
		cout << ress2 << endl;
	}
	else {
		cout << "Ошибка: невозожно вычислить";
	}
	return 0;
}