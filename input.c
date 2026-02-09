#include <stdio.h>
#include <ctype.h> // Required for isupper, islower, toupper, tolower functions

int main() {
    char character;
    char converted_character;

    printf("Enter a single character: ");
  
    if (scanf(" %c", &character) != 1) {
        printf("Only a single character is accepted.\n");
        return 1;
    }


    printf("The ASCII value of '%c' is %d.\n", character, character);

    if (character >= 'a' && character <= 'z') {
        converted_character = character - 32; 
        printf("Uppercase conversion: %c\n", converted_character);
    } else if (character >= 'A' && character <= 'Z') {
        converted_character = character + 32;
        printf("Lowercase conversion: %c\n", converted_character);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
