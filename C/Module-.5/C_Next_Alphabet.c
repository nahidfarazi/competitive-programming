#include <stdio.h>

int main() {
char n;
scanf("%c",&n);
if (n>96 && n<122)
{
    printf("%c ",n+1);
}else if (n==122){
    printf("a");
}
 
 return 0;
}