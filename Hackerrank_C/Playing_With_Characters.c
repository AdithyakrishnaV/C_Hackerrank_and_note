#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
    char ch; //character
    char s[100];//word
    char str[100];//sentence
    scanf("%c", &ch);
    scanf("%s", s);//usually scanf(%s) accepts only one word
    scanf("\n");
    scanf("%[^\n]%*c", str);
    
    printf("%c \n", ch);
    printf("%s \n", s);
    printf("%s", str);
       
    return 0;
}  
 // "[^\n]%*c" it is telling to skip the newline characters while scanning the input.
