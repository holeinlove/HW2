#include <stdio.h>
#include <stdbool.h>

int m2() {
    float sales, commission, earnings;

    while (true) {
        printf("Enter sales in dollars ( -1 to end ): ");
        scanf_s("%f", &sales);

        if (sales == -1) {
            return 0;
        }

        commission = (sales / 100) * 9;
        earnings = commission + 200;

        printf("Salary is %.3f\n", earnings);
        printf("\n");
    }

    return 0;
}