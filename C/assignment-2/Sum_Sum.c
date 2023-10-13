#include <stdio.h>

int main() {
int n, sump=0,sumn=0;;
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    if(a[i]>0){
         sump+=a[i];
    }
    if(a[i]<0){
        sumn+=a[i];
    }
    
}
printf("%d %d",sump,sumn);

 
 return 0;
}