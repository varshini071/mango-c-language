#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter exponent value (n): ");
    scanf("%d", &n);

    printf("4^%d = %.0f\n", n, pow(4, n));
    return 0;
}
