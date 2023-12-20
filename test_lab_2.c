#include <stdio.h>

int main()
{
    float x;
    printf("Введите число: ");
    scanf("%f", &x);
    
    if (x < 0)
        printf("Число %f является отрицательным. \n", x);
    if (x > 0)
        printf("Число %f является положительным. \n", x);

return 0;
}