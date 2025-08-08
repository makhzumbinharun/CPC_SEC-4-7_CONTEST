#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);
    printf("%lld + %lld = %lld\n", X, Y, X + Y);
    printf("%lld * %lld = %lld\n", X, Y, X * Y);
    printf("%lld - %lld = %lld\n", X, Y, X - Y);

    return 0;
}
