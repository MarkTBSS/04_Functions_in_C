#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    if (a > max) { max = a; }
    if (b > max) { max = b; }
    if (c > max) { max = c; }
    if (d > max) { max = d; }
    return max;
}

int main() {
    int a = 3;
    int b = 4;
    int c = 6;
    int d = 5;
    int result = max_of_four(a, b, c, d);
    printf("The biggest value is: %d", result);
    return 0;
}