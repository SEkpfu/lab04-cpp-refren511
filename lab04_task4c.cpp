#include <iostream>
using namespace std;

void kvn(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cout << " ";
		}
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	setlocale(0, "");
	int n, m;
	cout << "Введите:" << endl;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	kvn(n, m);
	return 0;
}