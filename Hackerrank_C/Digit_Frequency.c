#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int digits[10] = {0};
    scanf("%s", str);

    for(int i=0; i < strlen(str); i++){
       //check ASCII
       if(str[i]>=48 && str[i]<=57){
           digits[str[i]-48]++;
       }
    }
    
    for(int i=0; i<10; i++){
           printf("%d\t", digits[i]); 
       }
    return 0;
}


// The strlen() function calculates 
// the length of a given string.
//  It doesn’t count null character ‘\0’