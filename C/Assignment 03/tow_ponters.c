#include <stdio.h>

int main() {
int n;
int ar[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&ar[i]);
}
int x ;
scanf("%d",&x);
int flag = 0;
for (int i = 0; i < n-1; i++)
{
    for(int j = i+1;j<n;j++){
        if(ar[i] + ar[j] == x){
            flag++;
            break;
        }
    }
}
if(flag>0){
    printf("YES\n");
}else{
    printf("NO\n");
}


 
 return 0;
}