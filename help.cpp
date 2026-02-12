#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return 3*x*x - 5*cos(7*x - 1);
}

int main() {
    double eps = 1e-6;
    double step = 0.01;

    for(double x = -5; x < 5; x += step) {
        double a = x, b = x + step;
        if (f(a) == 0.0) cout << a << "\n";
        if (f(a) * f(b) < 0) {
            // bisekcja
            while (fabs(b - a) > eps) {
                double m = 0.5 * (a + b);
                if (f(a) * f(m) <= 0) 
                    b = m;
                else 
                    a = m;
            }
            cout << 0.5 * (a + b) << "\n";
        }
    }
}
