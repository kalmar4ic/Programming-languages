#include <stdio.h>

void main()
{
    float a, b, p, q, r, s;
    printf("Введите размеры поля. \n");
    scanf("%f%f", &a, &b);
    printf("Введите размеры домов. \n");
    scanf("%f%f", &p, &q);
    scanf("%f%f", &r, &s);
    if (a * b >= ((p * q) + (r * s)))
        if (a > p)
            if (a > s)
                if (b > q)
                    if (b > s)
                        puts("Данные дома можно расположить на данном участке");
                    else
                        puts("Данные дома нельзя расположить на данном участке");
                else
                    puts("Данные дома нельзя расположить на данном участке");
            else
                puts("Данные дома нельзя расположить на данном участке");
        else
            puts("Данные дома нельзя расположить на данном участке");
    else
        puts("Данные дома нельзя расположить на данном участке");
}