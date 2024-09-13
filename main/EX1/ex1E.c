// E. 数字分解与组合（顺序）
#include <stdio.h>

int reverse(int num) {
  int reversed = 0;
  while (num > 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }
  return reversed;
}

int main() {
  int num;
  scanf("%d", &num);
  printf("%d\n", reverse(num));
  return 0;
}
