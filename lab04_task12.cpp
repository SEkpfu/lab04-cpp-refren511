#include <iostream>
using namespace std;

bool lucky_ticket(int ticket) {
	if (ticket > 999999 || ticket < 100000) {
		return false;
	}
	int sum1 = 0; int sum2 = 0; int a = ticket;
	for (int i = 0; i < 3; i++) {
		sum2 += a % 10;
		a /= 10;
	}
	for (int i = 0; i < 3; i++) {
		sum1 += a % 10;
		a /= 10;
	}
	return sum1 == sum2;
}

bool lucky_ticket(int d1, int d2, int d3, int d4, int d5, int d6) {
	if (d1 < 0 || d1 > 9 || d2 < 0 || d2 > 9 || d3 < 0 || d3 > 9 || 
		d4 < 0 || d4 > 9 || d5 < 0 || d5 > 9 || d6 < 0 || d6 > 9 ) {
		return false;
	}
	int sum1 = d1 + d2 + d3;
	int sum2 = d4 + d5 + d6;
	return sum1 == sum2;
}

bool lucky_ticket(int half1, int half2) {
	if (half1 < 100 || half1 > 999 || half2 < 100 || half2 > 999) {
		return false;
	}
	int sum1 = 0; int sum2 = 0; int a1 = half1; int a2 = half2;
	for (int i = 0; i < 3; i++) {
		sum1 += a1 % 10;
		a1 /= 10;
	}
	for (int i = 0; i < 3; i++) {
		sum2 += a2 % 10;
		a2 /= 10;
	}
	return sum1 == sum2;
}

void per(bool k) {
	if (k) {
		cout << "билет счастливый";
	}
	else {
		cout << "билет не счастливый";
	}
}


int main() {
	setlocale(0, "");
	int n;
	cout << "Выбирите вариант ввода билета:" << endl;
	cout << "1 - одним целым числом" << endl;
	cout << "2 - шестью целыми числами" << endl;
	cout << "3 - двумя целыми числами" << endl;
	cout << "Ваш выбор = "; cin >> n;
	switch (n) {
	case 1:
		int ticket;
		cout << "Введите целое число = "; cin >> ticket;
		cout << "Результат: ";
		per(lucky_ticket(ticket));
		break;
	case 2:
		int d1, d2, d3, d4, d5, d6;
		cout << "Введите шесть целых чисел = "; cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
		cout << "Результат: ";
		per(lucky_ticket(d1, d2, d3, d4, d5, d6));
		break;
	case 3:
		int half1, half2;
		cout << "Введите два целых числа = "; cin >> half1 >> half2;
		cout << "Результат: ";
		per(lucky_ticket(half1, half2));
		break;
	}
	return 0;
}