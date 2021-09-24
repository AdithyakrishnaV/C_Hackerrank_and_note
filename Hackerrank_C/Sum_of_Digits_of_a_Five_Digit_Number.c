#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, last_sum=0;
    scanf("%d", &n);
    while(n>0){
        last_sum += n %10;
        n /= 10;
    }
    printf("%d", last_sum);
    
    return 0;
}