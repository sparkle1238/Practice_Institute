//переворот слов в строках 
#include <stdio.h>
#include "function.h"

int SwapWordsinArr()
{ 
  char  charr[10000]={};
  int start = 0;
  printf("введите строку\n");
  fgets(charr,9999,stdin);
  for(int i=0; charr[i]!='\0'; i++)
   if(charr[i] == ' ' || charr[i] == '!' || charr[i] == ',' || charr[i] == '.'|| charr[i] == '\n')  
      start = SwapSlovo(i, start, charr);//получаем конец слов
  printf("%s", charr); 
  return 0;// завершает программу 
}