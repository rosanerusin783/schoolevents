int main() {
  // Create an array to store the names of students who attended the event
  char* students[10];

  // Initialize the array with the names of the students
  for (int i = 0; i < 10; i++) {
    students[i] = "John";
  }

  // Print the list of students who attended the event
  for (int i = 0; i < 10; i++) {
    printf("%s\n", students[i]);
  }

  return 0;
}
