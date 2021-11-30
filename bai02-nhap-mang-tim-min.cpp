// bai02-nhap-mang-tim-min.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Nhap so phan tu: ";
    int a[10], n, min;
    cin >> n;
    cout << "Cac phan tu mang la: ";
    for (int i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
    //cout << "Cac phan tu mang la: " ;
    min = a[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (min > a[i]) { min = a[i]; };
    }
    cout << "Min = " << min << '\n';

}

