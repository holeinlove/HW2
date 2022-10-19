#include <stdio.h>
#include <stdbool.h>

int m3() {

	float loan_principal, rate, interest;
	int days;

	while (true)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &loan_principal);

		if (loan_principal == -1) {
			return 0;
		}

		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter terms of loan in days:");
		scanf_s("%d", &days);

		interest = loan_principal * rate * days / 365;
		printf("The interest charge is $%.2f\n", interest);
		printf("\n");
	}


	return 0;
}