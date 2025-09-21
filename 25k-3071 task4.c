#include <stdio.h>

int main() {
    int amount;
    int maxLimit = 500;

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= maxLimit) {
        if (amount % 20 == 0) {
            printf("Withdrawal approved\n");
        } else {
            printf("Withdrawal denied\n");
        }
    } else {
        printf("Withdrawal denied\n");
    }

    return 0;
}


