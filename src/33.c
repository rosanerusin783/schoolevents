#include <stdio.h>
int main() {
    int i;
    printf("Enter number of students: ");
    scanf("%d", &i);
    
    if (i >= 0) {
        for (i = 1; i <= i * 2; i++) {
            printf("*");
        }
    } else {
        printf("Invalid input. Please enter a non-negative integer.");
    }

    return 0;
}
