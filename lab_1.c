#include <stdio.h>
#include <math.h>
int main()
{
    double b, y, z;

    printf("\nвведите число для решения примеров b="); scanf("%lf", &b);

    y = (sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4))) / (sqrt(pow(b, 2) + 2) + b + 2);

    z = 1 / (sqrt(b + 2));

    printf("\n Результат первого примера равен=%lf", y);
    printf("\n Результат второго примера равен=%lf\n", z);
}