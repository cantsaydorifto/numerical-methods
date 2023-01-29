#include <iomanip>
#include <iostream>
using namespace std;

double f(double x, double y) {
    return (y * y - x * x) / (y * y + x * x);
}

int main() {
    float x0, y0, xn, h, k1, k2, k3, k4, k;
    int n;
    cout << "x0 = ";
    cin >> x0;
    cout << "y0 = ";
    cin >> y0;
    cout << "Enter calculation point xn = ";
    cin >> xn;
    cout << "Enter h : ";
    cin >> h;
    n = (xn - x0) / h;
    for (int i = 0; i < n; i++) {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        y0 = y0 + k;
        x0 += h;
        cout << "value at x=" << x0 << " is :" << y0;
    }

    return 0;
}