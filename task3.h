#include <stdio.h>
#include "function.h"

int task3() 
{
  int m, m2, m4, m8, m16, m20;
  double b;
  char number;
  
  printf("введите номер задачи a или b \n");
  scanf("%c", &number);
  switch(number)
  {
    case 'a':
      printf("Введите диагональ куба\n");
      scanf("%lf",&b);
      printf("P = %lf\n",Pow(Sqrt( b / 3),2)*6);
    break;
    case 'b':
      printf("введите число которое нужно ввести в 4 и в 20 степень\n");
      scanf("%i",&m);
      m2 = m * m;
      m4 = m2 * m2;
      m8 = m4 * m4;
      m16 = m8 * m8;
      m20 = m16 * m4;
      printf("m4 = %i m20 = %i\n",m4 , m20);
      break;
    default:
      return 0;
      break;  
  }
return 0;
}