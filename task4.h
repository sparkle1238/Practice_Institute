#include <stdio.h>
#include <math.h>//библиотека для математики
#include "function.h"

int Eotx(double a,double b,double dx,double e)
{
  printf("                             E^-x\n"
         "--------------------------------------------------\n"
         "|   x  |       f(x)      |   n  |         E^-x   |\n"
         "--------------------------------------------------\n");
  for (double x=a;x<=b;x+=dx)
    { 
       double sum=0,sum2=exp(-x);//сум 2 пользуется функцией из смаф для проверки нашего алгоритма

      for (int n=0;;n++)
      {    
        if( Pow(x,n) / Factorial(n) < Pow(10,e) )
        {
          printf("| %4.2lf | %15.*lf | %4i |%15.*lf | \n" ,x ,(int)Abs(e) ,sum ,n ,(int)Abs(e)+2 ,sum2); //выводим сум 2 для проверки точности 
          break;
        }
        sum += Pow(-1,n) * Pow(x,n) / Factorial(n);
      }    
    }
  printf("--------------------------------------------------\n"); 
  return 0;
}


int HODR(int a, int b)
{
    if (b == 0){
     return a;
    }
   return HODR(b, a % b);
}


int HOD(int a, int b) 
{
	while (b != 0) 
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}


int Log2(double x/*число для лога*/ ,int startdegree /*0*/)
{
  return x <= 0 ? -2 : ( x > 2 ? Log2(x/2, startdegree+1) : (startdegree == 0 ? (x==2 ? 1 : 0 )  : ( (int)x % 2 == 0  ? startdegree+1 : -1)));
}


int task4()
{
  int nomer;
  printf("введите 1 для нахождение log2 \nвведите 2 для нахождение НОД \nвведите 3 для нахождение НОД рекурсией  \nвведите 4 для нахождение Е^-x\n");
  scanf("%i",&nomer);
  switch(nomer)
  {
    case 1:
      printf("Введите: ");
      int n;
      scanf("%i",&n);
      printf("%i",Log2(n,0));
      break;
    case 2:
      printf("Введите:a,b ");
      int by,ay;
      scanf("%i%i",&ay,&by);
      printf("%i",HOD(ay,by));
      break;
    case 3:
      printf("Введите: a,b");
      scanf("%i%i",&ay,&by);
      printf("%i",HODR(ay,by));
      break;
    case 4:    
      printf("введите: начало Х , конец Х, шаг увеличения Х и точность \n");
      double a,b, dx,e;
      scanf("%lf %lf %lf %lf",&a , &b, &dx, &e);
      Eotx(a,b,dx,e);
      break;
    default:
      return 0;
      break;  
  }
  return 0 ;
}