int getEvents() {
    // Generate a random number between 1 and 5
    int numEvents = (rand() % 5) + 1;

    // Create an array to store the events
    Event events[numEvents];

    // Loop through each event and generate its details randomly
    for (int i = 0; i < numEvents; i++) {
        events[i] = getEventDetails();
    }

    return events;
}

Event getEventDetails() {
    Event event;

    // Generate a random number between 1 and 5 for the event type
    int type = (rand() % 5) + 1;

    // Set the event type based on the generated number
    if (type == 1) {
        event.type = "Exam";
    } else if (type == 2) {
        event.type = "Assignment";
    } else if (type == 3) {
        event.type = "Class";
    } else if (type == 4) {
        event.type = "Field Trip";
    } else {
        event.type = "Other";
    }

    // Generate a random date and time for the event
    event.dateTime = getRandomDateTime();

    return event;
}

time_t getRandomDateTime() {
    // Generate a random year between 2015 and 2030
    int year = (rand() % 16) + 2015;

    // Generate a random month between 1 and 12
    int month = rand() % 12 + 1;

    // Generate a random day between 1 and the number of days in the month
    int day = rand() % (getDaysInMonth(month, year) - 1);

    // Generate a random hour between 0 and 23
    int hour = rand() % 24;

    // Generate a random minute between 0 and 59
    int minute = rand() % 60;

    struct tm timeInfo;
    time_t eventTime;

    memset(&timeInfo, 0, sizeof(struct tm));
    timeInfo.tm_year = year - 1900;
    timeInfo.tm_mon = month - 1;
    timeInfo.tm_mday = day;
    timeInfo.tm_hour = hour;
    timeInfo.tm_min = minute;

    eventTime = mktime(&timeInfo);

    return eventTime;
}

int getDaysInMonth(int month, int year) {
    // Initialize the number of days in the month to 31
    int numDays = 31;

    // Check if the month is February
    if (month == 2) {
        // If the year is a leap year, there are 29 days in February
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            numDays = 29;
        } else {
            // Otherwise, there are only 28 days in February
            numDays = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // If the month is April, June, September, or November, there are 30 days
        numDays = 30;
    }

    return numDays;
}