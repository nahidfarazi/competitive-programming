#include <stdio.h>
void dbl(int a,int b){
    int sum=a+b;
    printf("%d\n",sum);

}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    dbl(a,b);
 
 return 0;
}