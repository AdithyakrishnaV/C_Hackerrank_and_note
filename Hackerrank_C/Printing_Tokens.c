#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //logic to print the tokens of the sentence 
    char* t = strtok(s, " ");
    while(t != NULL){
        printf("%s\n", t);
        t = strtok(NULL, " ");
    }
    
    return 0;
}
