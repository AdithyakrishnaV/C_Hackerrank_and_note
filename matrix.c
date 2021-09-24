                   //n*m matrix

#include <stdio.h>

int main(){
    int n, m;
    int a[100][100];
    scanf("%d%d", &n, &m);//input no of row i&j column
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){ 
            scanf("%d", &a[i][j]);//input 
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", a[i][j]);//output
        }
    printf("\n");//print next row in new line
    }

    return 0;
}



               //n*n matrix

#include <stdio.h>

int main(){
    int n;
    int a[100][100];
    scanf("%d", &n);//input no of row i&j column

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ 
            scanf("%d", &a[i][j]);//input 
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", a[i][j]);//output
        }
    printf("\n");//print next row in new line
    }

    return 0;
}