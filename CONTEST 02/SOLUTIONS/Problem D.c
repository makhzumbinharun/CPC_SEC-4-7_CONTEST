#include <stdio.h>

int main() {
    const int X=1999;
    for(int i=1;;i++) {
        int P;
        scanf("%d", &P);
        if(P==X) {
            printf("Correct\n");
            break;
        }
        else
        printf("Wrong\n");
    }

    return 0;
}
