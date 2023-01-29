#include <math.h>
#include<iomanip>
#include <iostream>

using namespace std;
const double ERR{0.00000001};

double f(double x) {
    return (x * x * x - 4 * x + 1);
}
double df(double x) {
    return (3 * x * x - 4);
}

int main() {
    double x1,x0;
    int i = 0;
    cout<<setprecision(15);
    cout << "Enter x1 : ";
    cin >> x1;
    x0 = x1;
    x1 = x1 - f(x1) / df(x1);
    while (fabs(x1 - x0) > ERR) {
        cout << "x1 :" << x1 << "\t";
        cout << "f(x1) : " << f(x1) << "\t";
        cout << "number of iterations : " << i << "\n";
        x0 = x1;
        x1 = x1 - f(x1) / df(x1);
        i++;
    }
    return 0;
}