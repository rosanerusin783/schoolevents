#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i += 2) {
            printf("* ");
        }
        printf("\n");
    } else {
        for (int i = 1; i < n; i += 2) {
            printf("* ");
        }
        for (int i = 0; i < (n - 1) / 2; i++) {
            printf(" * ");
        }
        printf("\n");
    }
}
