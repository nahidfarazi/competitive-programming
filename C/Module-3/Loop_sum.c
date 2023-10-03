#include <stdio.h>

int main() {
 //write c program code\int 
//  int i, sum=0;
//  for( i = 1; i<=5;i++){  
//   sum+=i;
//  }

int i, n, sum=0;
printf("Enter your value: ");
scanf("%d", &n);
for(i=1;i<=n;i++){
    sum+=i;
}
 printf("%d\n",sum);
 return 0;
}