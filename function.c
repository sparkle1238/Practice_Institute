//реализация функций 
#include <stdio.h>
const double eps = 1e-15;

char CharTranslate(char c) // функция перевода для 5.2.2
{
  switch (c)
  {
    case 'A':
      return 'a';
    case 'B':
      return 'B';
    case 'C':
      return 'C';
    case 'D':
      return 'D';
    case 'E':
      return 'e';
    case 'F':
      return 'F';
    case 'G':
      return 'G';
    case 'H':
      return 'H';
    case 'I':
      return 'i';
    case 'J':
      return 'J';
    case 'K':
      return 'K';
    case 'L':
      return 'L';
    case 'M':
      return 'M';
    case 'N':
      return 'N';
    case 'O':
      return 'o';
    case 'P':
      return 'P';
    case 'Q':
      return 'Q';
    case 'R':
      return 'R';
    case 'S':
      return 'S';
    case 'T':
      return 'T';
    case 'U':
      return 'u';
    case 'V':
      return 'V';
    case 'W':
      return 'W';
    case 'X':
      return 'X';
    case 'Y':
      return 'y';
    case 'Z':
      return 'Z';
  }
  return -1;
}


//перевод из текста в цифры 
int Translation(char c)
{
  switch (c)
  {
    case '0':
      return 0;
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    case '9':
      return 9;
  }
  return 0 ;
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

//создание функции которая вернёт длину строки типа данных int 
int Spisoc(char *charr)
{ 
  int size=0;
  for( size=0;charr[size]!='\0'; size++)//бесконечный цикл тк можно забывать про ограничения)) 
  {   
    size++;//вернуть размер массива до enter
  } 
  return size;
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
  if (degree<0)
  {
    for(int i=degree;i<0;i++)
    {
      res/=number;
    }
    return res;
  }
  return 1;
}

double Abs(double number)
{
    return number>=0 ? number : -number;// тернарная операция модуля
}

//Алгоритм нахождения корня n-ной степени
//метод Ньютона для вычисления квадратного корня с заданной точностью
//   https://ru.wikipedia.org/wiki/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC_%D0%BD%D0%B0%D1%85%D0%BE%D0%B6%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F_%D0%BA%D0%BE%D1%80%D0%BD%D1%8F_n-%D0%BD%D0%BE%D0%B9_%D1%81%D1%82%D0%B5%D0%BF%D0%B5%D0%BD%D0%B8

double Sqrt(double number) 
{
    double result = number;
    double numbern = 0;
    while (Abs(result - numbern) > eps) 
    {
        numbern = result;
        result = (numbern + number / numbern) / 2;
    } 
    return result;
}

double Factorial(int a)
{
    return a>0 ? a*Factorial(a-1) : 1;
}

void DoTochki(double *result,int dotPosition,int youcc, char *inputArr)
{
  for(int j=dotPosition-1; j>=0; j--)
  {
    *result += ((Pow(youcc,(dotPosition-j-1))) * Translation(inputArr[j])); 
  }
}

void PosleTochki(double *result,int dotPosition, int youcc, char *inputArr)
{
  for(int j=-1,d=dotPosition+1; inputArr[d]!='\0'; j--,d++)
  {
    *result += ((Pow(youcc, j)) * Translation(inputArr[d])); 
  }
}

int LenDotIndex(char *arr,int lenDotIndex)
{
  if (arr[lenDotIndex] == '.' ||  arr[lenDotIndex] == '\0')
  {
    return lenDotIndex;
  } 
  return LenDotIndex(arr,++lenDotIndex);
}


