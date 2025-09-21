#include <stdio.h>

int main() {
    int rating;

    printf("Rate the movie 'The Lion King' (1 to 5): ");
    scanf("%d", &rating);

    if (rating == 5) {
        printf("Excellent\n");
    } else {
        if (rating == 4) {
            printf("Good\n");
        } else {
            if (rating == 3) {
                printf("Average\n");
            } else {
                if (rating == 2) {
                    printf("Poor\n");
                } else {
                    if (rating == 1) {
                        printf("Terrible\n");
                    } else {
                        printf("Invalid rating. Please enter a number from 1 to 5.\n");
                    }
                }
            }
        }
    }

    return 0;
}


