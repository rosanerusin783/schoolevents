#include <stdio.h>
#include <string.h>

// Function to add an event to the calendar
void addEvent(char *eventName, char *date, char *time) {
  // Create a new struct for the event
  struct Event {
    char name[50];
    char date[10];
    char time[8];
  };

  // Add the event to the calendar
  struct Event event = {eventName, date, time};

  // Print the event to the console
  printf("Event added: %s on %s at %s\n", event.name, event.date, event.time);
}

// Main function
int main() {
  char eventName[50];
  char date[10];
  char time[8];

  // Get the user input for the event name, date, and time
  printf("Enter an event name: ");
  scanf("%s", &eventName);
  printf("Enter a date (YYYY-MM-DD): ");
  scanf("%s", &date);
  printf("Enter a time (HH:MM:SS): ");
  scanf("%s", &time);

  // Add the event to the calendar
  addEvent(eventName, date, time);

  return 0;
}
