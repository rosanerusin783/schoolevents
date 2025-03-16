#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char eventName[30];
    char date[10];
    char time[5];
    char location[20];

    // Get input from user
    printf("Enter the name of the event: ");
    scanf("%s", &eventName);
    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%s", &date);
    printf("Enter the time (HH:MM): ");
    scanf("%s", &time);
    printf("Enter the location: ");
    scanf("%s", &location);

    // Print the input
    printf("\n");
    printf("Event Name: %s\n", eventName);
    printf("Date: %s\n", date);
    printf("Time: %s\n", time);
    printf("Location: %s\n", location);

    return 0;
}
