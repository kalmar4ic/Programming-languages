#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum(int *farr, int *sarr, int a, int b);

int main()
{
    int *arr1;
    int *arr2;
    int count;
    int count2;

    puts("Введите кол-во элементов 1-ого массива:");
    scanf("%d", &count);
    puts("Введите кол-во элементов 2-ого массива:");
    scanf("%d", &count2);

    

    arr1 = malloc(sizeof(int) * count);
    arr2 = malloc(sizeof(int) * count2);

    srand(time(NULL));
    for (int i = 0; i < count; i++)
    {
        arr1[i] = rand()%20 - 5;
        printf("1) %d\n", arr1[i]);
    }
    puts("\n");
    for (int i = 0; i < count2; i++)
    {
        arr2[i] = rand()%20 - 5;
        printf("2) %d\n", arr2[i]);
    }

    sum(arr1, arr2, count, count2);

    puts("Sum of array numbers:");
    
    if(count2 > count)
    {
        for (int i = 0; i < count; i++)
        {
            printf("3) %d\n", *(arr1 + i));
        }
    }
    else
    {
        for (int i = 0; i < count2; i++)
        {
            printf("3) %d\n", *(arr1 + i));
        }
    }





    free(arr1);
    free(arr2);
    arr1 = NULL;
    arr2 = NULL;
    return 0;
}

void sum(int *farr, int *sarr, int a, int b)
{
    if (b > a)
    {
        for (int i = 0; i < a; i++)
        {
            farr[i] += sarr[i];
        }
    }
    else
    {
        for (int i = 0; i < b; i++)
        {
            farr[i] += sarr[i];
        }
    }
}
