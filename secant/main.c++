#include <math.h>
#include<iomanip>
#include <iostream>

using namespace std;
const double ERR{0.00000001};

double f(double x) {
    return (x * x * x - 4 * x + 1);
}

int main() {
    double x0, x1, x2;
    int i = 0;
    cout << "Enter x0 and x1 : ";
    cin >> x0 >> x1;
    x2 = ((x0 * f(x1)) - (x1 * f(x0))) / (f(x1) - f(x0));
    cout<<setprecision(12)<<"\n";
    while (fabs(f(x2)) > ERR) {
        i++;
        cout << "x0 :" << x0 << "\t";
        cout << "x1 :" << x1 << "\t";
        cout << "f(x2) : " << f(x2) << "\t";
        cout << "x2: " << x2<<"\t";
        cout << "number of iterations : " << i << "\n";
        x2 = ((x0 * f(x1)) - (x1 * f(x0))) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
    }
    return 0;
}