#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int *mas = NULL;
    int *arr = NULL;
    int count = 4;
    int count2 = 0;
    float sr_afd = 0, sr_afp = 0;

    mas = malloc(sizeof(int) * count);

    srand(time(NULL));

    for (int i = 0; i < count; i++)
    {
        mas[i] = rand()%20 - 10;
        sr_afd = sr_afd + mas[i];
        printf("%d\n", mas[i]);
    }

    sr_afd = sr_afd / count;
    printf("1) Average value = %f\n", sr_afd);

    for (int i = 0; i < count; i++)
    {
        if(!(mas[i] > 0 && mas[i] % 2 == 0))
        {
            count2 = count2 + 1;
        }
    }

    if (count2 != 0)
    {

        arr = malloc(sizeof(int) * count2);

        int j = 0;
        for (int i = 0; i < count; i++)
        {
            if (!(mas[i] > 0 && mas[i] % 2 == 0))
            {
            
                arr[j] = mas[i];
                j++;
            }
        }

        for (int i = 0; i < count2; i++)
        {
            printf("%d\n", arr[i]);
            sr_afp = sr_afp + arr[i];
        }

        sr_afp = sr_afp / count2;
        printf("2) Average value = %f\n", sr_afp);
    }

    else if (count2 == 0)
    {
        puts("No values");
    }

    free(mas);
    mas = NULL;
    free(arr);
    arr = NULL;

    return 0;
}