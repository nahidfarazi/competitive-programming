#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int a[n];
for(int i=0; i<n;i++){
    scanf("%d",&a[i]);
}
int divided_by_tow=0, divided_by_three=0;

 for(int i=0;i<n;i++){
   if(a[i]%2==0 && a[i]%3==0){
        divided_by_tow++;
   }else if(a[i]%2==0){
        divided_by_tow++;
        
    }else if(a[i]%3==0){
        divided_by_three++;
    }
 }
 printf("%d %d",divided_by_tow,divided_by_three);
 
 return 0;
}