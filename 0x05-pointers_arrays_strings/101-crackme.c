#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
int main() {
    srand((unsigned int)time(NULL));

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    printf("Generated password: ");
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_char();
        printf("%c", password[i]);
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("\n");
    return 0;
}
