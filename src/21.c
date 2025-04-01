#include <stdio.h>

int main() {
    int event_number = 1;
    while (event_number <= 10) {
        printf("Event %d: Attendees: %d\n", event_number, event_number * 2);
        ++event_number;
    }
    return 0;
}
