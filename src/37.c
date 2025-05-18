#include <stdio.h>
#define MAX_EVENT_COUNT 10

typedef struct Event {
    int id;
    char name[MAX_EVENT_COUNT];
} Event;

void addEvent(Event *events, int count) {
    for (int i = 0; i < count; ++i) {
        events[i].id = i + 1;
        events[i].name[0] = '\0'; // Set name to null
    }
}

void printEvents(Event *events, int count) {
    printf("Event Count: %d\n", count);
    for (int i = 0; i < count; ++i) {
        printf("%d. Event: %s\n", i + 1, events[i].name);
    }
}

int main() {
    Event *events = malloc(MAX_EVENT_COUNT * sizeof(Event));
    if (!events) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int count;
    printf("Enter the number of events: ");
    scanf("%d", &count);

    for (int i = 0; i < count; ++i) {
        Event event;
        printf("Event %d: ", i + 1);
        scanf("%s", event.name);
        addEvent(events, count);
    }

    printEvents(events, count);
    free(events);

    return 0;
}
