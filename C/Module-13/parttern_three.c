#include <stdio.h>

int main() {
int n,m=n;;
scanf("%d",&n);
for(int i=n;i>=1;i++){
    for (int j = 1; m>=j; j++){
        printf("%d ",j);
    }
    printf("\n");
    m++;
}
 
 return 0;
}