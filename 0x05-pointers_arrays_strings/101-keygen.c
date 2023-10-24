#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The length of a valid password for 101-crackme.
#define PASSWORD_LENGTH 10

// The sum of the ASCII values of all characters in a valid password for 101-crackme.
#define PASSWORD_SUM 2772

// Generates a random character between 'a' and 'z'.
char generate_random_character() {
    return (char)('a' + rand() % 26);
}

// Generates a random valid password for 101-crackme.
char* generate_random_password() {
    char* password = malloc(PASSWORD_LENGTH + 1);
    if (password == NULL) {
        return NULL;
    }

    // Generate a random password.
    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_character();
    }

    // Add a terminating null byte to the end of the password.
    password[PASSWORD_LENGTH] = '\0';

    // Check if the sum of the ASCII values of all characters in the password is equal to 2772.
    int sum = 0;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        sum += password[i];
    }

    // If the sum is not equal to 2772, regenerate the password.
    if (sum != PASSWORD_SUM) {
        free(password);
        return generate_random_password();
    }

    // Return the password.
    return password;
}

int main() {
    // Seed the random number generator.
    srand(time(NULL));

    // Generate a random password.
    char* password = generate_random_password();

    // Print the password to the console.
    printf("%s\n", password);

    // Free the memory allocated for the password.
    free(password);

    return 0;
}

