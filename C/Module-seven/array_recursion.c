#include <stdio.h>
void fun(int arr[], int n, int i){
    if(i == n) return;
    fun(arr,n,i+1);
    printf("%d ",arr[i]);
}
int main() {
    int n,i;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n,0);
 
 return 0;
}