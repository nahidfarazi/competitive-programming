#include <stdio.h>
void I_love_Recursion(int n){
    if(n == 0) return;
    I_love_Recursion();
    printf("I love Recursion\n");
}
int main() {
int n;
scanf("%d",&n);

 
 return 0;
}