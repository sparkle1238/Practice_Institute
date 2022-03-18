#include <stdio.h>
#include "function.h"

int task3() 
{
  char number;
 
  printf("введите номер задачи a или b \n");
  scanf("%c", &number);
  switch(number)
  { 
    double b;
    case 'a':
      printf("Введите диагональ куба\n");
      scanf("%lf",&b);
      printf("P = %lf\n",Pow((b / Sqrt(3)) , 2) * 6);
    break;
    int m;
    case 'b':
      printf("введите число которое нужно ввести в 4 и в 20 степень\n");
      scanf("%i",&m);
      long long int m2 = m * m;
      long long int m4 = m2 * m2;
      long long int m8 = m4 * m4;
      long long int m16 = m8 * m8;
      long long int m20 = m16 * m4;
      printf("m4 = %lli m20 = %lli\n",m4 ,m20);
      break;
    default:
      return 0;
      break;  
  }
return 0;
}