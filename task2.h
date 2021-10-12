// из текста n СС вывести Double в 10 сс

#include <stdio.h>
#include "function.h"

int СhangeСС() 
{
  double sum = 0.0;
  int youcc;//твоя сс 
  char arr[1000];
  printf("введите вашу сс\n");
  scanf("%i",&youcc);
  printf("введите строку с числом\n");
  scanf("%s",arr);
  for(int i=0; arr[i]>3; i++)
  {
    if(arr[i] == 46)
    {
      for(int j=i-1; j>=0; j--)
      {
        sum += ((Pow(youcc,(i-j-1))) * (arr[j]-48)); 
      }
      for(int j=-1,d=i+1; arr[d]>3; j--,d++)
      {
        sum += ((Pow(youcc,   j))    * (arr[d] - 48)); 
      }
    }
  }
  printf("%lf\n", sum);
  return 0;
}