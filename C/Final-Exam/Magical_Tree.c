#include <stdio.h>

int main() {
int n;
scanf("%d",&n); 
int line = (n+1)/2 + 5;
int star=1,space=line-1;;
for (int i = 0; i < line; i++)
{
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < star; j++)
    {
        printf("*");
    }
    space--;
    star+=2;
    printf("\n");
        
}
space = ((line*2)-1-n)/2;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
    printf("\n");
}

 return 0;
}