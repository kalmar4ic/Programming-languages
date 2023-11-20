#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, p, s;

    printf("\na="); scanf("%f", &a);
    printf("\nb="); scanf("%f", &b);
    printf("\nc="); scanf("%f", &c);

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nПлощадь треугольника=%f\n", s);
}