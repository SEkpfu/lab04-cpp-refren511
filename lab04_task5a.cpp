#include <iostream>
using namespace std;

double fun_fuct(int n) {
	int mult = 1;
	for (int i = 1; i <= n; i++) {
		mult *= i;
	}
	return mult;
}

int main() {
	setlocale(0, "");
	int n, m;
	cout << "Ввести:" << endl;
	cout << "N = "; cin >> n;
	cout << "M = "; cin >> m;
	double vr = (fun_fuct(n) * fun_fuct(m)) / fun_fuct(n + m);
	cout << "Ответ = " << vr;
	return 0;
}