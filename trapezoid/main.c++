#include <iostream>
using namespace std;

double f(double x) {
    return 1 / (x * x + 1);
}

int main() {
    int i, n;
    double a, b, sum = 0;
    cout << "Enter Limits of integration : \n";
    cin >> a >> b;
    cout << "Enter number of subintervals : ";
    cin >> n;
    double x[n + 1], y[n + 1];
    double h = (b - a) / n;
    for (i = 0; i < n + 1; i++) {
        x[i] = a + i * h;
        y[i] = f(x[i]);
        cout<<y[i]<<" ";
    }
    for (i = 1; i < n; i++) {
        sum += y[i];
    }
    double res = h/2*(y[0] + y[n] + 2*sum);
    cout<<res;
    return 0;
}