#include <stdio.h>
int main(){
    int count = 0;
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    printf("You entered: %s", input);
    for(int i = 0; input[i] != '\0'; i++){
        count++;
    }
    printf("Length of the string: %d\n", count - 1);
    return 0;
}