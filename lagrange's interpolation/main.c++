#include <iostream>
using namespace std;
int main() {
    int n;
    double pt;
    cout << "Enter the number of values : ";
    cin >> n;
    double x[n], y[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter value x[" << i << "] : ";
        cin >> x[i];
        cout << "Enter value y[" << i << "] : ";
        cin >> y[i];
    }
    cout << "Enter the interpolation point : ";
    cin >> pt;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double pro = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            pro *= ((pt - x[j]) / (x[i] - x[j]));
        }
        sum += (pro * y[i]);
    }
    cout << "x[" << pt << "] : " << sum;
    return 0;
}