/* Аудиторна робота с.58 #6 */

#include "app.h"

int main()
{
    double a, b, c;

    printf("Enter a, b, c: ");

    int ret = scanf("%lf %lf %lf", &a, &b, &c);

    //==, !=
    //fabs(a - b) < 1e-9
    //a~b
    if (ret != 3)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (fabs(a - b) < 1e-3 && fabs(a - c) < 1e-3 && fabs(b - c) < 1e-3)
    {
        printf("Triangle has all equal sides\n");
    }

    else {
        printf("I don't know");
    }

    return 0;
}