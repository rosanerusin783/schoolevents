#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Event {
    char *name;
    int day;
    int month;
    int year;
} Event;

int main() {
    // Declare an array of events
    Event events[10];

    // Initialize the events
    for (int i = 0; i < 10; i++) {
        events[i].name = NULL;
        events[i].day = -1;
        events[i].month = -1;
        events[i].year = -1;
    }

    // Add an event to the array
    Event newEvent = {"New Year's Eve", 31, 12, 2023};
    events[5] = newEvent;

    // Print the first event in the array
    printf("First event: %s\n", events[0].name);

    return 0;
}
