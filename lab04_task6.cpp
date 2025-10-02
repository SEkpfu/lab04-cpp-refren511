#include <iostream>
using namespace std;

char ret_symb(int number) {
	if (number > 0) {
		return '+';
	}
	else if (number < 0) {
		return '-';
	}
}

string ret_numb(int number) {
	switch (number) {
	case 0: return "ноль"; break;
	case 1: return "один"; break;
	case 2: return "два"; break;
	case 3: return "три"; break;
	case 4: return "четыре"; break;
	case 5: return "пять"; break;
	case 6: return "шесть"; break;
	case 7: return "семь"; break;
	case 8: return "восемь"; break;
	case 9: return "девять"; break;
	case 10: return "десять"; break;
	}
}

int main() {
	setlocale(0, "");
	int number;
	cout << "Введите число из интервала [-10, 10] = "; cin >> number;
	cout << ret_symb(number) << ret_numb(number);
	return 0;
}