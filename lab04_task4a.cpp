#include <iostream>
using namespace std;

void kv4() {
	for (int i = 1; i <= 16; i++) {
		if (i % 4 == 0) {
			cout << '*' << endl;
		}
		else {
			cout << '*';
		}
	}
}

int main() {
	//a
	kv4();
	return 0;
}