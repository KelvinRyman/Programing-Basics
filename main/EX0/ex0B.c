// B. 数字简写（顺序）
#include <stdio.h>
#include <math.h>

int main() {
    long x, y;
    scanf("%ld %ld", &x, &y);
    printf("10^%ld+%ld = %ld\n", x, y, (long)pow(10, x) + y);
    return 0;
}
