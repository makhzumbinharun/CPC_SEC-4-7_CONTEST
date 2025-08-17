#include <stdio.h>

int main() {
    int N, i, find_even = 0;
    scanf("%d", &N);
    for (i = 2; i <= N; i += 2) 
    {
        printf("%d\n",i);
        find_even = 1;
        }
            if (!find_even) {
            printf("-1\n");
            }
    return 0;
}
