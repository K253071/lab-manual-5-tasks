#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0) {
        if (age <= 12) {
            printf("Child\n");
        } else {
            if (age <= 19) {
                printf("Teenager\n");
            } else {
                if (age <= 59) {
                    printf("Adult\n");
                } else {
                    printf("Senior\n");
                }
            }
        }
    } else {
        printf("Invalid age entered\n");
    }

    return 0;
}


