#include "fuel.h"

/* main - program to calculate the fuel consumption
 * Return: 0(success)
 */

int main(void)
{
	/* Declaration and initialization of variables */
	float distance;
	char veh_type[20];
	char fuel_type[20];
	char user[10];
	float fuel_litres, cash_amout;

	printf("\033[1;36m \t\t\tFuel Consumption\033[0m\n");
	printf("Welcome to the Fuel Consumption program.\nThis program helps you determine the approximate fuel you will need for your travel.");
	printf("\nAre you a guest or user?");
	getStr("\n1. Guest \n2. User \nEnter your choice: ", user, 10);
	getFlt("Enter the distance to be traveled", &distance);
	getStr("Enter the type of vehicle to be used for the safari: ", veh_type, 20);
	getStr("Enter the type of fuel the vehicle use: ", fuel_type, 20);

	printf("\nThe vehicle to be use is a %s.", veh_type);
	printf("\nThe fuel to be used is %s.", fuel_type);
	printf("\nThe distance to be traveled is %.2f.\n", distance);

	

	getStr("Enter string input: ", veh_type, 20);
	printf("You entered: %s\n", veh_type);

	return (0);
}
