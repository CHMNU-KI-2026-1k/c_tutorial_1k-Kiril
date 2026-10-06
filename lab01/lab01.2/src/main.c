// c_1k_1s.cpp : Defines the entry point for the application.
//

#include "app.h"

#define DEFAULT_PRECISION 3

int main()
{
    double x, a, b;

    printf("Enter x, a, b:");

    int ret = scanf("%lf %lf %lf", &x, &a, &b);

    if (ret < 3) {
        printf("Incorrect input parameters. Must be 3");
        return -1;
    }

    double result = acos(2 / (a - x)) / (b * cos(3 * x));

    printf("Enter precision (default is %d):", DEFAULT_PRECISION);
    int precision;
    ret = scanf("%d", &precision);

    if (ret < 1 || precision < 1)
    {
        precision = DEFAULT_PRECISION;
    }

    printf("Result (with %d digits): %.3f\n", precision, result);
    return 0;
}