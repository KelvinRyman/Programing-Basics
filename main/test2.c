#include <stdio.h>
#include <time.h>

#include "test2.h"

void print_local_time() {
    time_t t = time(NULL);
    printf("%s", asctime(localtime(&t)));
}

void get_c_version() {
    printf("%ld\n", __STDC_VERSION__);
}