// D. 计算长方体体积和表面积
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("V=%d\n", a * b * c);
  printf("S=%d\n", 2 * (a * b + b * c + c * a));
  return 0;
}
