// Z. 算数式子判断（选择）
#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c, result;
    char s[50];
    char op;
    scanf("%s", s);
    sscanf(s, "%d%c%d=%d", &a, &op, &b, &c);
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            printf("%s error op\n", s);
            return 0;
    }
    printf("%s ", s);
    if (c == result) {
        printf("correct\n");
    } else {
        printf("wrong\n");
    }
    return 0;
}
