#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("%llu\n", factorial(N));
    }

    return 0;
}
