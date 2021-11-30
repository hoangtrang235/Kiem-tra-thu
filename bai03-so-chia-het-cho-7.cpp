// bai03-so-chia-het-cho-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "so lon hon 100 la: ";
	cin >> a;
	cout << "so nho hon 200 la: ";
	cin >> b;
	cout << "so chia het cho 7 la: ";
	for (int i = a; i < b; i++) {
		if (i % 7 == 0) {
			cout << i << '\t';
		}
	}
	return 0;
}
