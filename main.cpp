#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    float a = 0;
    float b = 0;
    float fa;
    float fb;
    do {
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
        fa = a * a * cos(a) + 1;
        fb = b * b * cos(b) + 1;
    }

    while (fa * fb >= 0);
    float x = 0;
    float err = 0;
    float fx = 0;
    do {
        x = (a + b) / 2;
        fx = x * x * cos(x) + 1;
        if (fx == 0) {
            cout << x << endl;

        } else if (fa * fx < 0) {
            b = x;
            fb=b*b*cos(b)+1;
        } else {
            a = x;
            fa=a*a*cos(a)+1;
        }
        err = abs((b - a) / 2);
    }while(err>=pow(10,-6));
    cout<<setprecision(4)<<x<<endl;
    return 0;
}
