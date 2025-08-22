#include <stdio.h>

int main() {
    int N;
    long long num, max = -1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("%lld\n", max);
    return 0;
}
