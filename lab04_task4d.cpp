#include <iostream>
using namespace std;

void chess_desk(int n, int m) {
	for (int row = 0; row < n; row++) {
		for (int roww = 0; roww < m; roww++) {
			for (int col = 0; col < n; col++) {
				if ((row + col) % 2 == 0) {
					for (int i = 0; i < m; i++) {
						cout << '*';
					}
			
				}
				else {
					for (int i = 0; i < m; i++) {
						cout << ' ';
					}
				}
			}
			cout << endl;
		}
	}
}

int main() {
	setlocale(0, "");
	int n, m;
	cout << "Введите:" << endl;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	chess_desk(n, m);
	return 0;
}