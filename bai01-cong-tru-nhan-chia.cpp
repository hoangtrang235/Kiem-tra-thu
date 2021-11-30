// bai01-cong-tru-nhan-chia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, Tong, Hieu, Tich, Thuong;
    cout << "Nhap vao a & b: ";
    cin >> a;
    cin >> b;
    Tong = a + b;
    cout << "Tong a & b la: " << Tong << '\n';
    Hieu = a - b;
    cout << "Hieu a & b la: " << Hieu << '\n';
    Tich = a * b;
    cout << "Tich a & b la: " << Tich << '\n';
    Thuong = a / b;
    cout << "Thuong a & b la: " << Thuong << '\n';
}

