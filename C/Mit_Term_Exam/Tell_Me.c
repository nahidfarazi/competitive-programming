#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
//end of test case input.
for (int i = 0; i < t; i++)
{   int n;
    scanf("%d",&n);
    int a[n];
    // array declaration done
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //array input done
    int x;
    scanf("%d",&x);
    // array print
    for (int i = 0; i < n; i++)
    {
       if (x==a[i])
       {
        printf("YES\n");
        break;
       }else{
        printf("NO\n");
        break;
       }
       
    }
        

}

 
 return 0;
}