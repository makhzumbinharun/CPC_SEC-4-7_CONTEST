#include <stdio.h>

int main() {
    int N, i, D;
    scanf("%d", &N);
    for (i=2; i<=N; i++) {
        int P=1;
        for (D=2; D<i; D++) {
            if (i%D==0) {
                P=0;
                break;
            }
        }
        if (P==1) {
            printf("%d ", i);
        }
    }
    return 0;
}
