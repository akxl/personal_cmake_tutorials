#include "MathFunctions.hxx"

double mysqrt(double x) {
    double x0 = 0.0;
    double x1 = 5.0;
    double epsilon = 1.0e-5;
    while (abs(x1-x0) > epsilon) {
        x0 = x1;
        x1 = x0 - ((pow(x0, 2.0) - x)/(x*x0));
    }
    return x1;
}