#include <stdio.h>

int main() {
    int i;

    printf("Enter the number of events: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        for (i = 1; i <= i; i++) {
            printf("*\n");
        }
    }

    return 0;
}
