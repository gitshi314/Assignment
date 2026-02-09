#include <stdio.h>
int main() {
    int a,b,c,greatest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    greatest = a;
    if (b > greatest) { 
        greatest = b; 
    }
    else if (c > greatest) { 
        greatest = c; 
    }
    printf("The greatest number is: %d\n", greatest);
    return 0;
}