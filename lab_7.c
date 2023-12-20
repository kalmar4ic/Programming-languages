#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int count = 5;
double arr[count] = {1, 2, 3, 4, 5};

int main()
{
    int i = 0, j = 0;
    double *p = arr;

    srand(time(NULL));
    for (i = 0; i < count; i++)
    {
        arr[i]= (rand() % 10 - 5);
        printf("Numbers of massive = %f, Address = %i\n", arr[i], &arr[i]);
    }
    puts("\n");

    puts("Printing numbers using pointers:");
    for (j = 0; j < count; j++)
    {
        printf("Numbers of massive using pointers = %f\n", *(p + j));
    }
    return 0;   
}