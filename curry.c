#include <stdio.h>

int main() {
    int i;
    printf("Multiplication Table of 4:\n");
    for (i = 1; i <= 10; i++) {
        printf("4 x %d = %d\n", i, 4 * i);
    }
    return 0;
}
