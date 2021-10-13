#include <stdio.h>
#include "function.h"

int Eotx()
{
  double a,b,dx,sum;
  int e;
  printf("введите: начало Х , конец Х, шаг увеличения Х и точность \n");
  scanf("%lf %lf %lf %i",&a , &b, &dx, &e);
  printf("                             E^-x                            \n"
         "-------------------------------------------------------------\n"
         "|   x     |        f(x)        |   n  |         E^-x        |\n"
         "-------------------------------------------------------------\n");
  for (double x=a;x<=b;x+=dx)
    { 
      sum=0;
      for (int n=0;;n++)
      {    
        if( Pow(x,n) / Factorial(n) < Pow(10,e) )
        {
          printf("| %7.3lf | %18.*lf | %4i |%20.*lf | \n" ,x ,(int)Abs(e) ,sum ,n ,(int)Abs(e)+2 ,sum); 
          break;
        }
        sum += Pow(-1,n) * Pow(x,n) / Factorial(n);
      }    
    }
  printf("-------------------------------------------------------------\n"); 
  return 0;
}

int HOD(int a,int b)
{ 
  int nod = 0;
  printf("Введите 2 числа для нахождения их НОД");
  return nod;
}

int Log2(double x,int startdegree)
{
  return x <= 0 ? -2 : ( x > 2 ? Log2(x/2, startdegree+1) : (startdegree == 0 ? (x==2 ? 1 : 0 ) : ( (int)x % 2 == 0 ? startdegree+1 : -1)));
}

int task4()
{
  int nomer,n;
  printf("введите 1 для нахождение log2 \nвведите 2 для нахождение НОД \nвведите 3 для нахождение Е^-x\n");
  scanf("%i",&nomer);
  switch(nomer)
  {
    case 1:
      printf("Введите: ");
      scanf("%i",&n);
      printf("%i",Log2(n));
      break;

    case 2:

      break;

    case 3:
      Eotx();
      break;

    default:
      return 0;
      break;  
  }
  return 0 ;
}
