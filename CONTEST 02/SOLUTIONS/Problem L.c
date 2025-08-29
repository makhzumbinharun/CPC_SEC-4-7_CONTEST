#include <stdio.h>

int main() {
    int A, B, i, GCD;
    scanf("%d %d", &A, &B);

    for(i = 1; i <= A && i <= B; i++) {
        if(A % i == 0 && B % i == 0) {
            GCD = i;
        }
    }

    printf("%d\n", GCD);
    return 0;
}
