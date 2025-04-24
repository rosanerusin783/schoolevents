#include <stdio.h>
int main() {
    int event_count = 0;
    char *event_names[] = {"Event1", "Event2", "Event3", ...}; // Array of event names

    for (int i = 0; i < sizeof(event_names) / sizeof(event_names[0]); i++) {
        printf("%s\n", event_names[i]);
        if (i == 4) { // End the array
            break;
        }
    }

    return 0;
}
