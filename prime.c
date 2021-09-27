         //234 = 432

int main() 
{ 
  int n, i;
  printf("Enter the number\n");
  scanf("%d", &n);
  for(i=2; i<n; i++){
      if(n%i==0){
        printf("No");
        break;
      } 
  }
  if(i==n){
        printf("Yes");
      }
  
   return 0;
}