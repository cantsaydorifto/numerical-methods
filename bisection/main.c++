#include <iostream>
#include <math.h>

using namespace std;

const double ERR{0.0001};

double f(double x) {
    return (x * x * x - 4 * x + 1);
}

int main() {
    double a, b, c;
    int i = 0;
    cout << "Enter value of a and b \n";
    cin >> a >> b;
    while (fabs(a-b)>ERR){
        c = (a+b)/2;
        if(f(a)*f(c)<0){
            b = c;
        }
        else if(f(b)*f(c)<0){
            a = c;
        }
        else{
            // if(f(a)<ERR){        !--for edge cases
            //     c = a;
            // }
            // else if(f(b)<ERR){
            //     c = b;
            // }
            // break;               --!
        }
        cout<<"number of iterations : "<<i<<"\n";
        cout<<"a :"<<a<<"\t";
        cout<<"b :"<<b<<"\t";
        cout<<"f(c) : "<<f(c)<<"\t";
        cout<<"c : "<<c;
        i++;
    }
    cout<<"Root is "<<c;
    return 0;
}