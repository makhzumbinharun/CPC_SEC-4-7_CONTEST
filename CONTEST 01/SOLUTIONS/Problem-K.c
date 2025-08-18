#include <stdio.h>
int main() {
    int N, years, remaining, months,days;
    scanf("%d", &N);
     years = N / 365;
     remaining = N % 365;
     months = remaining / 30;
     days = remaining % 30;
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
    return 0;
}
