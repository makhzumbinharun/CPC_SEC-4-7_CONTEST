#include <stdio.h>

int main() {
    int N, initial, reversed = 0;
    scanf("%d", &N);
    initial = N;

    while (N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }
    printf("%d\n", reversed);
    if (initial == reversed) printf("YES\n");
    else printf("NO\n");

    return 0;
}
