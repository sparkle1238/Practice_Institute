#include <stdio.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"

int main()
{
  for(;;)
  { int a;
    int dz;
    char c;
    printf("\nвведите номер дз\n");
    scanf("%i%c", &dz ,&c);
    switch(dz){
    case 1:
      SwapWordsinArr();
      break;
    case 2:
      СhangeСС(); 
      break;
    case 3:
      task3(); 
      break;
    case 4:
      task4(); 
      break;
    default:
      return 0;
      break;  
    }
  }
  return 0;
}