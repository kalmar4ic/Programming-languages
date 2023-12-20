#include <stdio.h>

void main()
{
    int i;
    int j = 0;
    do
    {
        int i = 0;
        do
        {
                printf("* ");
                i = i + 1;
        } while ((i - (6 - j)) != 0);
        puts("\n");
        j = j + 1;
    } while (j < 6);

}