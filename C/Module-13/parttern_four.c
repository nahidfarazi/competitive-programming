#include <stdio.h>

int main() {
int n,s,m;
scanf("%d",&n);
s=n-1;
m=1;
for(int i =1;i<=(2*n)-1;i++){
        
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=m;j++){
            printf("*");
        }
        if(i<=n-1){
            s--;
            m+=2;
        }else{
            s++;
            m-=2;
        }
        printf("\n");
    }
 
 return 0;
}