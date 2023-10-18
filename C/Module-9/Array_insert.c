#include <stdio.h>

int main() {
// int ar [6]={10,20,30,40,50,};
//  for(int i =5;i>1;i-- ){
//    ar[i]=ar[i-1];
//  }
//  ar[1]=100;
//  for(int i=0;i<5;i++){
//     printf("%d\n",ar[i]);
//  }

int n;
scanf("%d",&n);
int ar[n+1];
for(int i=0;i<n;i++){
    scanf("%d ",&ar[i]);
}
int position,value;
scanf("%d %d",&position, &value);
for (int i =n; i>=position+1;i--){
    ar[i]=ar[i-1];
}
ar[position] = value;

for(int i =0; i<=n;i++){
    printf("%d ", ar[i]);
}
 return 0;
}