#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        
        for(int s = 1; s <= N - i; s++) {
            printf(" ");
        }
        
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
