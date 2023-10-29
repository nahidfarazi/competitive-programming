#include <stdio.h>
int dbl(){
    int a, b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    return sum;
    
}

int main() {

    int result = dbl();
    printf("%d",result);
 
 return 0;
}