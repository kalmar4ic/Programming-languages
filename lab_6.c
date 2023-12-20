#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    char name[100], FIO[100], sname[100], surname[100];
    puts("Введите Ваше ФИО на латинице: ");
    scanf("%s %s %s", name, sname, surname);
    sprintf(FIO, "Ваше ФИО инициалами: %s %c. %c.", name, sname[0], surname[0]);
    puts(FIO); 

    return 0;
}