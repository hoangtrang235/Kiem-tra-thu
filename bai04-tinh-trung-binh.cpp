
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double t, l, h, x;
    cout << "Enter your point: ";
    cin >> t >> l >> h;
    cout << "Point math: " << t << '\n';
    cout << "Point physics: " << l << '\n';
    cout << "Point chemistry: " << h << '\n';
    x = (t + l + h) / 3;
    cout << "Diem TB ba mon la: " << x << '\n';
    if (x >= 8) { cout << "Good"; }
    else if (x >= 7) { cout << "Fair"; }
    else if (x >= 5) { cout << "Average"; }
    else { cout << "Fail Exam"; }
}
  