#include <stdio.h>
int main() {
    int i;
    printf("Enter number of events: ");
    scanf("%d", &i);
    if (i > 0) {
        for (i = 1; i <= i; ++i) {
            printf("Event %d: \n", i);
            printf("   Date: YYYY-MM-DD\n");
            printf("   Time: HH:MM\n");
            printf("   Location: \n");
        }
    } else {
        printf("No events selected.");
    }
}
