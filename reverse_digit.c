#include<stdio.h>

int main()
{
	int num,rev=0,dig;
	printf("Enter the number to reverse\n");
  scanf("%d",&num);

	while(num!=0){
    dig = num%10;
    num /= 10;
    rev = rev*10+dig;
  }
	printf("The reverse of the number is %d\n",rev);
	return 1;
}