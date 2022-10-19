#include <stdio.h>
#include <stdbool.h>

int m1() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, accountBalance;

    while (true) {
        printf("Enter account number ( -1 to end ): ");
        scanf_s("%d", &accountNumber);

        if (accountNumber == -1) {
            return 0;
        }

        printf("Enter beginning balance: ");
        scanf_s("%f", &beginningBalance);
        printf("Enter total charges: ");
        scanf_s("%f", &totalCharges);
        printf("Enter total credits: ");
        scanf_s("%f", &totalCredits);
        printf("Enter credit limit: ");
        scanf_s("%f", &creditLimit);

        accountBalance = beginningBalance + totalCharges - totalCredits;

        if (accountBalance > creditLimit) {
            printf("Account:\t%d\n", accountNumber);
            printf("Credit Limit:\t%.2f\n", creditLimit);
            printf("Balance:\t%.2f\n", accountBalance);
            printf("Credit limit exceeded.\n");
        }
    }

    return 0;
}