#include <stdio.h>

#include "test2.h"

int main(int argc, char *argv[]) {
    int a = 0;
    printf("Hello, this is the test %d.\n", a);
    print_local_time();
    printf("You are using C");
    get_c_version();
    return 0;
}
