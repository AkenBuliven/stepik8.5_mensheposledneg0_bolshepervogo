#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    
    int n;
    int i;
    int array[100];
    int temp = -1;
 
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
  
    for (i=0; i<n; i++)
    {
      if (array[i] < array[n - 1] && array[i] > array[0]) 
      {
        temp = array[i];
        printf("%d ", temp);
      }
    }
    if (temp < 0 )
      printf("0");
  
  return 0;
   
}


