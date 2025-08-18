#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A % B == 0 || B % A == 0) {
        printf("Multiples\n");
    }
else {
        printf("No Multiples\n");
    }

    return 0;
}
