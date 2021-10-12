//реализация функций 

#include <stdio.h>

int Spisoc(char *charr);
int SwapSlovo(int end, int start, char *charr);
void ChSwap(char *a, char *b);
void IntSwap(int *a, int *b);
double Pow(double number,double degree);
double Abs(double number);
double Sqrt(double number);
double Factorial(int a);




const double eps = 1e-15;


//создание функции которая вернёт длину строки типа данных int 
int Spisoc(char *charr)
{
  for(int size=0;; size++)//бесконечный цикл тк можно забывать про ограничения)) 
  {   
    if(charr[size] == '\n') 
    return size+1;//вернуть размер массива до enter
  } 
}

//функция для переворота слова
int SwapSlovo(int end, int start, char *charr)
{
  for(int i=start, j=end-1; i<((end - start)/2) + start; i++, j--)
  {
    ChSwap(&charr[i] , &charr[j]);
  }
  return ++end;//вернем начало следующего слово жаль что ++i работает медленее i++
}

//меняет 2 переменные местами типа char
void ChSwap(char *a, char *b)
{
  char c = *a;
  *a = *b;
  *b = c;
}

//меняет 2 переменные местами типа int
void IntSwap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

// возвод в степень 
double Pow(double number,double degree)
{
  double res=1.0;
  if (degree>0)
  {
    for(int i=degree;i>0;i--)
    {
      res *= number;
    }
    return res;
  }
  else if (degree == 0)
  {
    return 1;
  }
  else
  {
    for(int i=degree;i<0;i++)
    {
      res/=number;
    }
    return res;
  }
}

double Abs(double number) {
    return number>=0 ? number : -number;// тернарная операция модуля
}

//Алгоритм нахождения корня n-ной степени
//метод Ньютона для вычисления квадратного корня с заданной точностью
//   https://ru.wikipedia.org/wiki/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC_%D0%BD%D0%B0%D1%85%D0%BE%D0%B6%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F_%D0%BA%D0%BE%D1%80%D0%BD%D1%8F_n-%D0%BD%D0%BE%D0%B9_%D1%81%D1%82%D0%B5%D0%BF%D0%B5%D0%BD%D0%B8

double Sqrt(double number) {
    double result = number;
    double numbern = 0;
    while (Abs(result - numbern) > eps) {
        numbern = result;
        result = (numbern + number / numbern) / 2;
    } 
    return result;
}

double Factorial(int a)
{
    return a>0 ? a*Factorial(a-1) : 1;
}
