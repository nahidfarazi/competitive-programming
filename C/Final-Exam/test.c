#include <stdio.h>

int main() {
int n,m;
scanf("%d %d ",&n,&m);
int arr[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
int flag =0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == j || i + j == n - 1) {
        if (arr[i][j] != 1) {
          flag = 1;
          break;
        }
      } else if (arr[i][j] != 0) {
        flag = 1;
        break;
      }
    }
    printf("\n");
  }

 if (flag == 1) {
    printf("NO\n");
  } else {
    printf("YES\n");
  }

 
 return 0;
}