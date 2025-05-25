#include <stdio.h>
#define MAX_EVENTS 100
typedef struct Event {
    char name[50];
    int duration;
} Event;

void createEvent() {
    Event event;
    event.name = "Movie Night";
    event.duration = 3;
    events[MAX_EVENTS].name = event.name;
    events[MAX_EVENTS].duration = event.duration;
    MAX_EVENTS++;
}

int getEvent(int index) {
    if (index >= 0 && index < MAX_EVENTS) {
        printf("Selected event: %s - Duration: %d\n", events[index].name, events[index].duration);
        return index;
    }
    return -1;
}
