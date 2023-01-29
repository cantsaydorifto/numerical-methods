#include <iostream>
using namespace std;

double f(double x) {
    return 1 / (x * x + 1);
}

int main() {
    double a, b, h, sum = 0;
    int i, n;
    cout << "Enter Limits of integration : \n";
    cin >> a >> b;
    cout << "Enter number of subintervals : ";
    cin >> n;
    double x[n + 1], y[n + 1];
    h = (b - a) / n;
    for (i = 0; i < n + 1; i++) {
        x[i] = a + i * h;
        y[i] = f(x[i]);
    }
    for (i = 1; i < n; i++) {
        if (i % 2 == 0) {
            sum += 2 * y[i];
            continue;
        }
        sum += 4 * y[i];
    }
    sum += (y[0] + y[n]);
    double res = (h / 3) * sum;
    cout <<res;
    return 0;
}