#include <iostream>
#include <cmath>
using namespace std;

void solv_ur(double a, double b, double c, double* x1, double* x2, int* cntx);

int main() {
	setlocale(0, "");
	int cntx = 0;
	double x1, x2, a, b, c;
	cout << "Введите коэффиценты уравнения: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	solv_ur(a, b, c, &x1, &x2, &cntx);
	if (cntx == 2) {
		cout << "Корни уравнения:" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2;
	}
	else if (cntx == 1) {
		cout << "Корень уравнения:" << endl;
		cout << "x = " << x1;
	}
	else {
		cout << "Действительных корней нет";
	}
	return 0;
}

void solv_ur(double a, double b, double c, double* x1, double* x2, int* cntx) {
	double d = b * b - 4 * a * c;
	if (d > 0) {
		*x1 = ((-b + sqrt(d)) / (2.0 * a));
		*x2 = ((-b - sqrt(d)) / (2.0 * a));
		*cntx = 2;
	}
	else if (d == 0) {
		*x1 = (- b / (2.0 * a));
		*cntx = 1;
	}
}