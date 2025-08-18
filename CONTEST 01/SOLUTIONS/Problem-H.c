#include <stdio.h>
int main() {
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    int min=A;
    if (min>B) min=B;
    if (min>C) min=C;
    int max=A;
    if (B>max) max=B;
    if (C>max) max=C;
    printf("%d %d\n", min, max);
    return 0;
}
