int main() {
    // Declare variables
    int age;
    char name[20];
    
    // Ask user for input
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your name: ");
    scanf("%s", name);
    
    // Print output
    printf("Your name is %s and you are %d years old.", name, age);
}
