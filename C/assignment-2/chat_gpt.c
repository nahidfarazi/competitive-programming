#include <stdio.h>

int main() {
    int N;
    printf("Enter an integer N: ");
    scanf("%d", &N);

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d\n", i);
        }
    } else if(N<=0){
        for (int i = N; i >= 0; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}
