#include <stdio.h>
#include <stdbool.h>
#include<math.h>

int m6(){
	float principal = 5000;
	float x, sum, rate;
	int i;
	while (true)
	{
		printf("Enter your interest rate:");
		scanf_s("%f", &rate);

		if (rate <= 0)
		{
			return 0;
		}

		for (i = 1; i <= 15; i++)
		{
			x = (1 + rate / 100);
			sum = principal * (pow(x, i));
			//("compound interest is $%.2f\n", sum);
		}
		printf("compound interest is $%.2f\n", sum);
		printf("\n");
	}
	return 0;
}