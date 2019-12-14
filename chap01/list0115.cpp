#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.1416;
    double r;

    cout << "半径:";
    cin >> r;

    cout << 2 * PI * r << "\n";
    cout << PI * r * r << "\n";
}