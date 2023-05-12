#include <stdio.h>

/* main - calculate the fuel consumption of different cars
 * Return: 0(success)
 */

int main()
{
	int distance;
	float price, average, liters, total_amount;

	/* fetch the above information from the user */
	printf("Please enter the expected distance to be traveled: ");
	scanf("%d", &distance);		/* distance in km */

	printf("Enter the price per liter of the fuel to be used: ");
	scanf("%f", &price);		/* price in shillings */

	printf("Enter the average consumption of the vehicle to used: ");
	scanf("%f", &average);		/* average is in liter per kilometer */

	/* calculate the liters required */
	liters = distance / average;
	
	/* calculate the total amount to be spent */
	total_amount = liters * price;

	/* output the necessary information */
	printf("The expected distance to be travelled is %d.\nYou are expected to consume approximately %.2f liters.\nThe expected total amount to be spent is %.2fKsh.\n", distance, liters, total_amount);
	return (0);
}
