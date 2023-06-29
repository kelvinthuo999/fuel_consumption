#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToUpper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
}
/* main - calculate the fuel consumption of different cars
 * Return: 0(success)
 */

int main()
{
	int distance;
	char vehicle[100], fuel[50];
	float price, average, litres, ttl_amnt;

	/* fetch the above information from the user */
	printf("\t\t\t\t Fuel Calculator \n\n\n");
	printf("Vehicle to be used to travel:\n a) Saloon \n b) SUV \n c) Truck\n");
	scanf("%s", vehicle);
	convertToUpper(vehicle);
	
	printf("Fuel type: \n a) Petrol \n b) Diesel \n");
	scanf("%s", fuel);
	convertToUpper(fuel);

	printf("Expected distance to be traveled: ");
	scanf("%d", &distance);		/* distance in km */

	/* If statements to calculate consumption for different vehicle class */
	if (strcmp(vehicle, "A") == 0 || strcmp(vehicle, "SALOON") == 0)
	{
		if (strcmp(fuel, "PETROL") == 0)
		{
			price = 200.00;
			average = 10.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using a %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else if (strcmp(fuel, "DIESEL") == 0)
		{
			price = 150.00;
			average = 8.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using a %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else
		{
			printf("Enter a valid type of fuel from the given choices");
		}

	}



	// printf("Price per liter of the fuel to be used: ");
	//scanf("%f", &price);		/* price in shillings */

	// printf("Enter the average consumption of the vehicle to used: ");
	//scanf("%f", &average);		/* average is in liter per kilometer */

	/* calculate the liters required */
	//liters = distance / average;
	
	/* calculate the total amount to be spent */
	//total_amount = liters * price;

	/* output the necessary information */
	//printf("The expected distance to be travelled is %d.\nYou are expected to consume approximately %.2f liters.\nThe expected total amount to be spent is %.2fKsh.\n", distance, liters, total_amount);
	return (0);
}
