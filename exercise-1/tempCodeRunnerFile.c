#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50];

    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    // Remove the newline character at the end of the first name
    firstName[strcspn(firstName, "\n")] = '\0';

    printf("Enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);

    // Remove the newline character at the end of the last name
    lastName[strcspn(lastName, "\n")] = '\0';

    // Concatenate the first name and last name to get the full name
    char fullName[100];
    snprintf(fullName, sizeof(fullName), "%s %s", firstName, lastName);

    printf("Your full name is: %s\n", fullName);

    return 0;
}
