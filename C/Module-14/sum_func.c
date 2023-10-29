#include <stdio.h>
int dbl(int a, int b){
    int sum = a+b;
    return sum;
}

int main() {

    int result = dbl(20,30);
    printf("%d",result);
 
 return 0;
}