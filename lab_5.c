#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int count = 6;
int arr[count] = { 1, -2, 3, -4, 5};

void main()
{
    int a = 0;
    int i, j;
    int c = 0 , s = 0;
    float sum;
    int sum_ost = 0;
    int proizvedenie = 1;

    srand(time(NULL));
    for (i = 0; i < count; i++)
    {
        arr[i] = (rand() % 10 - 5);
        printf("Numbers of massive = %i\n", arr[i]);
    }
    puts("\n");

    for (j = 0; j < count; j++)
    {
        if (arr[j] > 0)
        {
            a = a + arr[j];
            c = c + 1;
        }
        else if (arr[j] < 0)
        {
            s = s + 1;
            proizvedenie = proizvedenie * arr[j];
        }
    }

    if (a != 0 && c != 0)
    {
        sum = a / c;
        sum_ost = a % c;
    }

    printf("Summ + numbers of massive: %d\n", a);
    printf("count + numbers of massive: %i\n", c);
    printf("count - numbers of massive: %i\n", s);
    printf("average value + numbers of massive: %f\n", sum);
    printf("Remainder of the division + numbers of massive: %i\n", sum_ost);
    printf("product of negative numbers: %i\n", proizvedenie);

}