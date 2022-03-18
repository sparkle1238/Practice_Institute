#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "function.h"

//определяет размер каждого слова
int SizeSlovo(char *arr)
{
  for(int i=0;;i++)
  {
    if(arr[i] == ' ' || arr[i] == '\0' || arr[i] == ':')
    {
      if(arr[i]=='\0') 
      {
        return i-1;
      }
      return i;
    }
  }
}

//определяет количество слов в строке
int kolSlov(char *arr)
{  
  int slov=1;
  for(int i=0;arr[i]!='\0';i++) 
  {
    if(arr[i]==' ' || arr[i]==':')
    {
     slov++;     
    }
  }
  return slov;
} 

// сдвиг массива 
void CharacterShift(char *inputArr,int shift)
{
  for(int i=0;inputArr[i+shift-1]!='\0';i++)
  {
    inputArr[i]=inputArr[i+shift];
  }
}

//из строси выделяет подстраку с вещественными числами
void Nomer1()
{
  char *arr; 
  int tocha=0,istart,iend,itocha=0;
  printf("5.1 Введите строку: \n");
  arr = (char*)malloc(1000 * sizeof(char));
  fgets(arr,999,stdin);
  for(int i=0;arr[i]!='\0';i++)
  {
    if( (arr[i]=='+' || arr[i]=='-') )
    { 
    istart=i;
      for(int j=i+1;;j++,iend=j){
        if((('0'<=arr[j] && arr[j]<='9') || arr[j]=='.' ))
        {
          if(arr[j]=='.') 
          {
            itocha=j;
            tocha++;
          }  
        }
        else break;
      }
    }
    if(tocha==1 && itocha+1!=iend)
    {
      for(istart=i;istart<iend;istart++)
      {
      printf("%c",arr[istart]);
      }
      printf("\n");
    }
    tocha=0;
  }
  free(arr);
}

//узнает длину каждого слова 
void SizeWorld(char* arr,int k,int znak)//znak - < or >
{
  for(int i=0;arr[i]!='\0';i++)
    {
      if(i==0 && (znak*k <= znak*SizeSlovo(&arr[i])))//проверка первого слова 
      {
        if(SizeSlovo(&arr[i]) == 0) 
        {
          i++;
        }
        CharacterShift(&arr[i],SizeSlovo(&arr[i])+1);
        i--;
      }
      if(( arr[i] == ' ' || arr[i] == ':') && (znak*k <= znak*SizeSlovo(&arr[i+1])))//проверка остальных слов
      {
        if(SizeSlovo(&arr[i+1]) == 0) 
        {
          i++;
        }
        CharacterShift(&arr[i],SizeSlovo(&arr[i+1])+1);
        i--;
      } 
    }
    for(int i=1;arr[i]!='\0';i++)//удаление всех повторов разделителей 
    {
      if((arr[i]==' ' && arr[i-1]==' ') || (arr[i]==':' && arr[i-1]==' ') ||
        (arr[i]==' ' && arr[i-1]==':') || (arr[i]==':' && arr[i-1]==':') )
        {
          CharacterShift(&arr[i-1],1);
          i--;
        } 
    }
    for(;arr[0]==' '|| arr[0]==':';)
    {//удаление всех начальных разделителей 
      CharacterShift(&arr[0],1);
    }
    int slov=0;
    if(Spisoc(arr)>1) 
    {
      slov = kolSlov(arr);
    }
    printf("количество слов меньше %i: %i\n",k,slov);
}


void Nomer2_1()
{
  printf("5.2.1 Введите строчку\n");
  int n=10000;
  char *arr; 
  arr = (char*)malloc(n * sizeof(char));
  fgets(arr,n-1,stdin);
  int k;
  printf("Введите k\n");
  scanf("%i",&k);
  SizeWorld(arr,k,1);
  printf("строка которая содержит слова меньше %i символов: %s\n",k,arr);
  free(arr);
}

//находит слово минимальной длины и выводит его длину
int LenMinWords(char* arr)
{
  int len=0,lenminwords = 999999999;
  int i=0;
  for(;arr[i]!='\0';i++);//найти последний элемент 
  for(;i>=0;i--)
  {
      if((arr[i]!=' ' || arr[i]!=':'))
      {
        len++;
      }
      if(len<lenminwords && len!=0 &&(arr[i]==' ' || arr[i]==':'|| i==0))
      {
        lenminwords = len;
        len = 0;
      }
  }
  return lenminwords-1;
}


void Nomer2_2()
{
  int n=10000;
  char *arr2; 
  arr2 = (char*)malloc(n * sizeof(char));
  printf("5.2.2 Введите строчку\n");
  fgets(arr2,n-1,stdin);
  int k=LenMinWords(arr2);//нужно доделать
  SizeWorld(arr2,k,-1);
  printf("строка которая содержит слова меньше %i символов: %s\n",k,arr2);
  free(arr2);
}


int task5()
{ 
  int dz;
    char c;
    printf("\nвведите номер пз\n");
    scanf("%i%c", &dz ,&c);
  switch(dz)
  {
    case 1:
      Nomer1();
      break;
    case 2:
      Nomer2_1();
      break;
    case 3:
      Nomer2_2();
      break;
  }
  return 0;
}