#include <stdio.h>
#include <stdbool.h>

int main() {

	float hours, rate, salary, overtime, overtimepay;
	while (true)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hours);
		if (hours == 0) {
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		salary = hours * rate;
		printf("Salary is $%.2f", salary);

		if (hours <= 40) {
			printf("Salary is %.2f\n", salary);
		}

		if (hours > 40) {
			overtime = hours - 40;
			overtimepay = overtime * rate / 2;
			salary = salary + overtimepay;
			printf("Salary is %.2f\n", salary);
		}
		printf("\n");

	}
	return 0;
}