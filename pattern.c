/*Input: 5
Output :
        Enter a number
        1
        12
        123
        1234
        12345
*/
#include <stdio.h>

int main(void) 
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(int i=1; i<=n+1; i++){
    for(int j=1; j<i; j++){
      printf("%d", j);
    }
  printf("\n");
  }
  return 0;
}