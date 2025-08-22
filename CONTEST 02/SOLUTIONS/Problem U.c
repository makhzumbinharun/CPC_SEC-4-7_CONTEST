#include <stdio.h>

int main() {
    int N, A, B, T = 0;
    scanf("%d %d %d", &N, &A, &B);


    for (int i = 1; i <= N; i++) {
        int sum = 0, x = i;

        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        if (sum >= A && sum <= B) {
            T += i;
        }
    }

    printf("%d\n", T);

    return 0;
}
