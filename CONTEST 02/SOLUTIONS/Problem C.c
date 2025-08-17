#include <stdio.h>

int main() {
    int N, i, NUM;
    scanf("%d", &N);
    int even = 0, odd = 0, positive = 0, negative = 0;
    for(i = 0; i < N; i++)
    {
        scanf("%d", &NUM);
            if(NUM % 2 == 0) {
                even++;
                }
            else {
            odd++;
            }
            if(NUM > 0) {
            positive++;
            }
            else if(NUM < 0) {
            negative++;
            }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}
