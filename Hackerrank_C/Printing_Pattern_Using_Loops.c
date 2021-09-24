#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      
      int length = n*2-1;
      int start  = 0;
      int end    = length -1;
      int a[length][length];

      while(n != 0){
        for(int i=start; i<=end; i++){
            for(int j=start; j<=end; j++){
                if(i==start || i==end ||
                    j==start || j==end)
                        a[i][j] = n;
            }
        }
        ++start;
        --end;
        --n;
      }
      
      
      
      for(int i=0;i<length; i++){
          for(int j=0; j<length; j++){
              printf("%d\t", a[i][j]);
          }
          printf("\n");
      }
              
      
    return 0;
}
