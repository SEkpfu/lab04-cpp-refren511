#include <iostream>
using namespace std;

void kvn(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	setlocale(0, "");
	int n;
	cout << "Введите n = "; cin >> n;
	kvn(n);
	return 0;
}