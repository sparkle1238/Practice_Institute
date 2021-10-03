#include <stdio.h>
#include "task1.h"
#include "task2.h"

int main()
{
  for(;;)
  {
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
      return 0;
      break;  
    }
  }
  return 0;
}
// #include<stdio.h>
 
//  int main () {
//    int arr[1000][2];
//    int n,a1,a2;
//    scanf("%i",&n);
//    for (int i=0;i<n;i++)
//    {
//     for (int j=0; j<2;j++)
//     scanf("%i",&arr[i] [j]);
//    }
//     {
//      for(int i=0;i<n;i++)
//      for(int j=0;j<2;j++)
//       {
//        if(arr[i][j]>arr[i+1][j+1])
//        {
//          int a1=arr[i][j];
//          int a2=arr[i+1][j+1];
//          int a3;
//          a3=a1;
//          a1=a2;
//          a2=a3;
         
//          {
//          printf("%i",arr[i][j]);
//          return 0;
//        }
//       } 
//       }
//     }
//  }