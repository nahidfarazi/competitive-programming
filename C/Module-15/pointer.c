#include <stdio.h>

int main() {
int a=10;
int *ptr = &a;
    a=20;
// printf("a er address - %p\n",&a);
// printf("ptr er value - %p\n",ptr);
// printf("ptr er address - %p\n",&ptr);
printf("x er value - %d\n",a);
printf("dereference value - %d\n",*ptr);


 
 return 0;
}
