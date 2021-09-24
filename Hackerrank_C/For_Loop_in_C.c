#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int print(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    print(a, b);

    return 0;
}

int print(int a, int b){
const char *q[]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=a; i<=b; i++){
        if(i<=9){
            printf("%s\n", q[i-1]);
        }else{
            if(i%2==0){
            printf("even");
            }else{
                printf("odd");
            }
            printf("\n");
        }
    }
    
        return 0;
}

