#include <stdio.h>
#include "/Users/kalmar4ic/Documents/VS code/.vscode/const.h"

int main()
{
 double x, n;
    
    printf("Введите время в секундах: \n");
    scanf("%lf", &n);
    x = ((Distance / n) * Time_Second_Hours) / Distance_KMH ;
    printf("Средняя скорость в км/ч равна: %lf\n", x);

}