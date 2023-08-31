#include "fuel.h"

/* main - program to calculate the fuel consumption
 * Return: 0(success)
 */

int main(void)
{
	/* Declaration and initialization of variables */
	float distance/*, avg_consumption, p_per_ltr*/;
	/*char veh_type[50];*/
	/*char fuel_type[20];*/

	printf("\t\t\t\t\t Fuel Calculator\n");
	getFlt("Enter the distance to be traveled", &distance);
	printf("The distance to be traveled is %.2f.\n", distance);

	return (0);
}
