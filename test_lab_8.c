#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rows = 2;
    int cols = 5;

    int **rooms;

    rooms = malloc(sizeof(int) * rows);
    for (int i = 0; i < rows; i++)
    {
        rooms[i] = malloc(sizeof(int) * cols);

    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rooms[i][j] = rand()%10;
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4i", rooms[i][j]);
        }
        puts("");
    }

    free(rooms);
    rooms = NULL;
    return 0;
}
