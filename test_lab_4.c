#include <stdio.h>

void main()
{
    for(int ch = 0; ch <= 255; ch ++)
        printf("Значение ASCII для %c - %i. \n", ch, ch);
}