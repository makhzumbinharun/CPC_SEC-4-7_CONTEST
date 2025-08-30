#include <stdio.h>

int main() {
    char S;
    int N, X;

    scanf("%c", &S);
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &X);

        for(int j = 0; j < X; j++) {
            printf("%c", S);
        }
        printf("\n");
    }

    return 0;
}
