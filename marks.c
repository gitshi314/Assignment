#include <stdio.h>
int main() {
    int total=0,avg,marks[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter marks of student:\t");
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total / 5;
    printf("Total marks: %d\n", total);
    printf("Average marks: %d\n", avg);
    return 0;
}