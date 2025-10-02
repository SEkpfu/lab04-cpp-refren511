#include <iostream>
using namespace std;

double find_tf(double tc);
double find_tk(double tc);
void find_all(double tc, double& tf, double& tk);

int main() {
	setlocale(0, "");
	double tc1, tc2, tf, tk;
	cout << "(1) Введите температуру в Цельсиях tC = "; cin >> tc1;
	cout << "(2) Введите температуру в Цельсиях tC = "; cin >> tc2;

	// пункт 1
	cout << "Температура в градусах Фаренгейта tF = " << find_tf(tc1) << endl;

	// пункт 2
	cout << "Температура в градусах Кельвина tK = " << find_tk(tc1) << endl;

	// пункт 3
	find_all(tc2, tf, tk);
	cout << "Температура в градусах Фаренгейта tF = " << tf << endl;
	cout << "Температура в градусах Кельвина tK = " << tk;
	return 0;
}

double find_tf(double tc) {
	return ((9.0 * 1 / 5) * tc + 32.0);
}
double find_tk(double tc) {
	return (tc + 273.0);
}
void find_all(double tc, double& tf, double& tk) {
	tk = ((9.0 * 1 / 5) * tc + 32.0);
	tf = (tc + 273.0);
}