//переворот слов в строках 
#include <stdio.h>
#include "function.h"


int SwapWordsinArr()
{
  char  charr[10000]={};
  int size, j = 0;// начинаем с 1 для того что бы в начале был пробел для j 
  printf("введите строку\n");
  size = Spisoc(charr) ;// сюда вернётся размер строки
  for(int i=0; i<size; i++)//ну идём по массиву
  {
   if(charr[i] == ' ' || charr[i] == '!' || charr[i] == ',' || charr[i] == '.'|| charr[i] == '\n')//проверяем символы что бы их не перевернуть
    {       
      j = SwapSlovo(i, j, charr);//получаем конец слов
    }     
  }
  for(int i=0; i<size; i++)
  {
  printf("%c", charr[i]);
  }
  return 0;// завершает программу 
}