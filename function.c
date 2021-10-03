//реализация функций 

#include <stdio.h>

void ChSwap(char *a, char *b);
void IntSwap(int *a, int *b);
int Spisoc(char *charr);
int SwapSlovo(int end, int start, char *charr);
double Pow(int number,int degree);


//создание функции которая вернёт длину строки типа данных int 
int Spisoc(char *charr)
{
  for(int size=0; ; size++)//бесконечный цикл тк можно забывать про ограничения)) 
  {   
    scanf("%c", &charr[size]);//считать символ chara
    if(charr[size] == '\n') return size+1;//вернуть размер массива до enter
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
double Pow(int number,int degree)
{
  double res=1.0;
  if (degree>0)
  {
    for(int i=degree;i>0;i--)//пока степерь больше 0 увеличиваем 
    {
      res*=number;
    }
    return res;
  }
  else if (degree==0)
  {
    return 1;
  }
  else
  {
    for(int i=degree;i<0;i++)//пока степерь меньше 0 уменьшаем  
    {
      res/=number;
    }
    return res;
  }
}