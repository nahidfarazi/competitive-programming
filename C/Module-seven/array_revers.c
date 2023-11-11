#include <stdio.h>
void fun(int arr[], int n, int i){
    if(i  == -1) return;
    printf("%d ",arr[i]);
    fun(arr,n,i-1);
}
int main() {
    int n;
    scanf("%d",&n);
    int i = n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n,i);
 
 return 0;
}