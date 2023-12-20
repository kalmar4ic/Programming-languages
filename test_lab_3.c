#include <stdio.h>

void main()
{
    float value1, value2;
    char op;
    printf("Введите ваше выражение. \n");
    scanf("%f %c %f", &value1, &op, &value2);
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

}