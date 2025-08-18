#include <stdio.h>

int main() {
    int X, P=1;
    scanf("%d", &X);
    if (X<2) {
        P=0;
    } 
    else {
        for (int i=2; i<X; i++) {
            if (X%i==0) { 
                P=0;
                break;
            }
        }
    }
    if (P)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
