#include <stdio.h>

int main() {
int n,m;
// scanf("%d %d",&n,&m);
scanf("%d %d",&n,&m);
int arr[n][m];
for(int i=0;i<n;i++){
    for (int  j = 0; j < m; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
} 

/* for(int i=0;i<n;i++){
    for (int  j = 0; j < m; j++)
    {
        printf("%d ",arr[i][j]);
    }
  printf("\n");  
} */

// col print;

// int col;
// scanf("%d",&col);
/* for(int i=0;i<m;i++){
    printf("%d ",arr[col][i]);
} */

int row;
scanf("%d",&row);
for(int i=0;i<n;i++){
    printf("%d ",arr[i][row]);
}
 return 0;
}