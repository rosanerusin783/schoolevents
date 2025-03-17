#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Event {
    char *name;
    char *description;
};

void addEvent(struct Event event) {
    printf("Adding event: %s\n", event.name);
}

int main() {
    struct Event event1 = {"Quiz", "Math quiz on Wednesday"};
    addEvent(event1);

    struct Event event2 = {"Dance", "Dancing competition on Saturday"};
    addEvent(event2);

    return 0;
}
