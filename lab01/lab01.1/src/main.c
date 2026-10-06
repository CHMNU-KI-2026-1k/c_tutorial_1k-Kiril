// c_1k_1s.cpp : Defines the entry point for the application.
//

#include "app.h"

int main()
{
    double a = 7.15, b = 4.03, x = 1.28;

    double t1 = acos(2 / (a - x));

    printf("t1: %.3f\n", t1);

    double t2 = b * cos(3 * x);

    printf("t2: %.3f\n", t2);

    double result = t1 / t2;

    printf("Result: %.3f\n", result);

    return 0;
}