// из текста n СС вывести Double в 10 сс= 
#include <stdio.h>
#include "function.h"

int СhangeСС() 
{
  int youcc = 3;//твоя сс 
  char arr[1000]={};
  printf("введите строку с числом 3 cc \n");
  scanf("%s",arr);
  double sum = 0.0;
  int lenDotIndex =LenDotIndex(arr,0);
  DoTochki(&sum,lenDotIndex,youcc,arr);
  PosleTochki(&sum,lenDotIndex,youcc,arr);
  printf("%lf\n", sum);
  return 0;
}