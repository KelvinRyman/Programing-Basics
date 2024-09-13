// A. 反色（顺序）
#include <stdio.h>

// 获得16进制的反色
int main() {
    int r, g, b;
    scanf("%x %x %x", &r, &g, &b);
    printf("%02X%02X%02X\n", 255 - r, 255 - g, 255 - b);
    return 0;
}
