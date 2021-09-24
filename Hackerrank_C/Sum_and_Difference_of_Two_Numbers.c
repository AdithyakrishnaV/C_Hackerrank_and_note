#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, sum, sub;
    float p, q, s, f;
    //Input
    scanf("%d %d", &a, &b);
    scanf("%f %f", &p, &q);
    //Calculation
    sum=a+b;
    sub=a-b;
    s=p+q;
    f=p-q;
    //Output
    printf("%d %d \n", sum, sub);
    printf("%.1f %.1f", s, f); //"%.1f" to print only one decimal point
    
    
    return 0;
}