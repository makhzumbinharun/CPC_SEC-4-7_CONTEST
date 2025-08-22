#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        if (N == 0) {
            printf("0\n");
          // continue;
        }
        else {
            while (N > 0) {
                printf("%lld", N % 10);
                N /= 10;
                if (N > 0) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
