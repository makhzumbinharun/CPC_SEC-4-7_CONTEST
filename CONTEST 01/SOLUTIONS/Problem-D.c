#include <stdio.h>

int main () {
    long long N, SUM;
    scanf("%lld", &N);
    SUM = N * (N + 1) / 2;
    printf("%lld\n", SUM);
    return 0;
}
