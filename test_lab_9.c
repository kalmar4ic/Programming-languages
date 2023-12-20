#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <mach/mach_time.h>


int main(int argc, char* argv[])
{
    float value1, value2;
    char op;
    printf("Количество аргументов командной строки %i \n", argc);

    value1 = atof(argv[1]);
    op = argv[2][0];
    printf("%c\n", op);
    value2 = atof(argv[3]);

    if (op == '+')
        printf("%.2f\n", value1 + value2);
    else if (op == '-')
        printf("%.2f\n", value1 - value2);
    else if (op == '*')
        printf("%.2f\n", value1 * value2);
    else if (op == '/')
    {
        if (value2 == 0)
            puts("На ноль делить нельзя");
        else 
            printf("%.2f\n", value1 / value2);
    }

    return 0;
}