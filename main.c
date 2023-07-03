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
		if (strcmp(fuel, "PETROL") == 0 || strcmp(fuel, "A") == 0)
		{
			price = 200.00;
			average = 10.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using a %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else if (strcmp(fuel, "DIESEL") == 0 || strcmp(fuel, "B") == 0)
		{
			price = 180.00;
			average = 10.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else
		{
			printf("Error!\n");
		}

	}
	else if (strcmp(vehicle, "B") == 0 || strcmp(vehicle, "SUV") == 0)
	{
		if (strcmp(fuel, "PETROL") == 0 || strcmp(fuel, "A") == 0)
		{
			price = 200.00;
			average = 6.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else if (strcmp(fuel, "DIESEL") == 0 || strcmp(fuel, "B") == 0)
		{
			price = 180.00;
			average = 6.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else
		{
			printf("Error!\n");
		}
	}
	else if (strcmp(vehicle, "C") == 0 || strcmp(vehicle, "TRUCK") == 0)
	{
		if (strcmp(fuel, "PETROL") == 0 || strcmp(fuel, "A") == 0)
		{
			price = 200.00;
			average = 5.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else if (strcmp(fuel, "DIESEL") == 0 || strcmp(fuel, "B") == 0)
		{
			price = 180.00;
			average = 5.00;
			ttl_amnt = ((distance / average) * price);
			printf("A safari of %d km using %s will consume fuel totalling Ksh.%.2f\n", distance, vehicle, ttl_amnt);
		}
		else
		{
			printf("Error!\n");
		}
	}
	else
	{
		printf("Error!\n");
	}

	return (0);
}
