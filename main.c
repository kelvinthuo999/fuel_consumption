#include "fuel.h"

/* main - program to calculate the fuel consumption
 * Return: 0(success)
 */

int main(void)
{
	/* Declaration and initialization of variables */
	float distance/*, avg_consumption, p_per_ltr*/;
	char veh_type[20];
	/*char fuel_type[20];*/

	printf("\033[1;36m \t\t\tFuel Consumption\033[0m\n");
	printf("Welcome to the Fuel Consumption program.\nThis program helps you determine the approximate fuel you will need for your travel.");
	printf("\nAre you a guest or user?");
	printf("\n1. Guest \n2. User");
	getFlt("\nEnter the distance to be traveled", &distance);
	printf("The distance to be traveled is %.2f.\n", distance);

	getStr("Enter string input", veh_type, 20);
	printf("You entered: %s\n", veh_type);

	return (0);
}
