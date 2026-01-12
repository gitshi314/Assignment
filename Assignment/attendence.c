#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int attendance;
        printf("Enter attendance for student %d (1 is present,0 is absent): ", i);
        scanf("%d", &attendance);
        if (attendance == 1) {
            printf("Student %d: Present\n", i);
        } else if (attendance == 0) {
            printf("Student %d: Absent\n", i);
        } else {
            printf("Student %d: Invalid input\n", i);
        }
    }
    return 0;
}