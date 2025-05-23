#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 1) {
        printf("Factorials: %d\n", n * factorial(n - 1));
    } else {
        printf("No factorials for positive integers.\n");
    }
    return 0;
}

int factorial(int num) {
    int result = 1;
    while (num != 0) {
        result *= num--;
    }
    return result;
}
