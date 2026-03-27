ASSIGNMENT(VOTING)

#include <stdio.h>
int main() {
    int vote;
    int  A = 0,  B = 0,  C = 0;
    printf("Mini Voting System\n");
    printf("Candidates: 1 for A,2 for B,3 for C\n");
    printf("Enter 0 to stop voting and see results.\n");

    do {
        printf("Enter your vote: ");
        scanf("%d", &vote);
        if (vote == 1) {
             A++;
        } else if (vote == 2) {
             B++;
        } else if (vote == 3) {
             C++;
        } else if (vote != 0) {
            printf("Invalid vote! Please try again.\n");
        }

    } while (vote != 0);

    
    printf(" Final Vote  counts \n");
    printf("Candidate A: %d\n", A);
    printf("Candidate B: %d\n", B);
    printf("Candidate C: %d\n", C);

    
    printf("\nWinner: ");
    if ( A >  B &&  A >  C) {
        printf("Candidate A\n");
    } else if ( B >  A &&  B >  C) {
        printf("Candidate B\n");
    } else if ( C >  A &&  C >  B) {
        printf("Candidate C\n");
    } else {
        printf(" Tie!\n");
    }

    return 0;
}

ASSIGNMENT2(ATTENDENCE)





