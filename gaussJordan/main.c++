#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of variables : \n";
    cin >> n;
    float arr[n][n + 1];
    cout<<fixed<<setprecision(2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            cout << "Enter arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
    float temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
                temp = arr[j][i] / arr[i][i];
                for (int k = 0; k < n + 1; k++) {
                    arr[j][k] = arr[j][k] - (temp * arr[i][k]);
                }
        }
    }
    cout << "==========\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}