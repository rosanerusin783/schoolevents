// School Events Code

#include <stdio.h>

int main() {
    // Variable declarations
    int numberOfStudents = 0;
    int numberOfEvents = 0;
    char studentName[20];
    char eventName[20];

    // Get input from the user
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    printf("Enter the number of events: ");
    scanf("%d", &numberOfEvents);

    for (int i = 0; i < numberOfStudents; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", studentName);

        for (int j = 0; j < numberOfEvents; j++) {
            printf("Enter the name of event %d for student %s: ", j + 1, studentName);
            scanf("%s", eventName);
        }
    }

    return 0;
}
