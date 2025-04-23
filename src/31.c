#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Error: Number of elements must be greater than 0.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
