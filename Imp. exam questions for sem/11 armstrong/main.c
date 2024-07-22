#include <stdio.h>

int main()
{
	int n;

	printf("Enter Number : ");
	scanf("%d", &n);

	int var = n, sum = 0;

	// Loop to calculate the order of the given number

	while (n > 0) {

		int rem = n % 10;
		sum = (sum) + (rem * rem * rem);
		n = n / 10;
	}

	// If the order of the number will be equal to the number then it is Armstrong number.

	if (var == sum)
		printf("%d is an Armstrong number \n", var);
	else
		printf("%d is not an Armstrong number", var);

	return 0;
}
