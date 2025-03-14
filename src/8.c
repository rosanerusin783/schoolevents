
void logEvent(char* eventType) {
    FILE *file = fopen("events.log", "a");
    if (file == NULL) {
        return;
    }
    char buffer[1024];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    strftime(buffer, 1024, "%Y-%m-%d %H:%M:%S", &tm);
    fprintf(file, "%s - %s\n", buffer, eventType);
    fclose(file);
}