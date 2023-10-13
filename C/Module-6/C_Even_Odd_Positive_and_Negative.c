#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
for(int i =1; i<=n;i++){
    if(i%2==0){
        printf("Even: %d",i);
    }else if (i%2!=0){
        printf("Odd: %d",i);
    }else if(i>0){
        printf("Positive: %d",i);
    }else{
        printf("Negative: %d",i);
    }
}
 
 return 0;
}