#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int room [2][10] = { {102, 107, 109, 112, 115, 116, 123, 125, 127, 130}, 
{12, 43, 23, 12, 20, 15, 16, 23, 12, 15}};

void main()
{

int q;
srand(time (NULL));
for (q = 0; q < 11; q++)
    room[1][q] = rand()%10;


int i, j, flag = 0, num;
puts("Вместимость всех комнат гостиницы");

for (j = 0; j < 10; j++)
    printf("Комната #%i рассчитана на %i мест\n", room[0][j], room[1][j]);

puts("Введите минимальное необходимое кол-во мест ");
scanf("%i", &num);

for (j = 0; j < 10; j++)
    if (room[1][j] >= num)
    {
        flag = 1;
        printf("Комната #%i рассчитана на %i мест\n", room[0][j], room[1][j]);
    }

if (flag == 0)
    puts("Комнат с таким кол-вом не существует");
}