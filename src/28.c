#include <stdio.h>

void print_events(const char* event_name) {
    const char* year = "2023";
    const char* month = "10";

    printf("Events for %s in %s: \n", event_name, year);
    printf("-  %s\n", event_name);
}

int main() {
    const char* events[] = {"School Party", "Science Fair", "Art Exhibition", "Cooking Competition"};
    
    print_events(events[0]);
    return 0;
}
