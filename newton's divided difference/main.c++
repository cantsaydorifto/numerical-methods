#include <iostream>
using namespace std;
int main() {
    int n;
    double pt;
    cout << "Enter the number of values : ";
    cin >> n;
    double x[n], y[n], dy[n - 1][n - 1];
    for (int i = 0; i < n; i++) {
        cout << "Enter value x[" << i << "] : ";
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Enter value y[" << i << "] : ";
        cin >> y[i];
    }
    cout << "Enter the interpolation point : ";
    cin >> pt;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (i == 0) {
                dy[i][j] = (y[j + 1] - y[j]) / (x[j + 1] - x[j]);
                continue;
            }
            double deno = x[j + i + 1] - x[j];
            double numerator = dy[i - 1][j + 1] - dy[i - 1][j];
            dy[i][j] = numerator / deno;
        }
    }
    // cout << "y[]: \n";
    double res = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            res = y[0];
            continue;
        }
        double pro = 1;
        for (int j = 0; j < i; j++) {
            pro *= (pt - x[j]);
        }
        pro *= dy[i-1][0];
        res += pro;
        cout<<pro<<" ";
    }
    cout << "\nresult: " << res;
    return 0;
}