#include <iostream>
using namespace std;

double fun_xn(int x, int n) {
	int res = 1;
	if (n < 0) {
		for (int i = 0; i > n; i--) {
			res *= x;
		}
		return 1.0 / res;
	}
	else if (n > 0) {
		for (int i = 0; i < n; i++) {
			res *= x;
			return res;
		}
	}
	else {
		return res;
	}
}

int main() {
	setlocale(0, "");
	int x, n;
	cout << "Введите:" << endl;
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	cout << fun_xn(x, n);
	return 0;
}