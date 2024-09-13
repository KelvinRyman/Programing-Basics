#include <stdlib.h>
#include <stdio.h>

void get_c_version() {
    printf("Your C version: %ld\n", __STDC_VERSION__);
}

// 显示编译器
void get_c_compiler() {
    printf("Your C compiler: %d\n", __GNUC__);
}
