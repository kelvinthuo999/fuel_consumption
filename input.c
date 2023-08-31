#include "fuel.h"

/**
 * getFnt - Get float input from the user
 * Return: void
 */

void getFlt(const char *prompt, float *value_input)
{
	/* Variable declaration */
	int i;
	char input[50];
	bool validInput = false;

	/* Check if value is integer(or float) and positive */
	do {
		printf("%s:", prompt);
		scanf("%s", input);

		validInput = true;
		for (i = 0; input[i] != '\0'; i++)
		{
			if(!isdigit(input[i]) && input[i] != '.' && input[i] != '-')
			{
				validInput = false;
				break;
			}
		}
		
		if (validInput)
		{
			*value_input = atof(input);
			if (*value_input < 0)
			{
				validInput = false;
				printf("Invalid input. Enter a valid positive number.\n");
			}
		}
		else
		{
			printf("Invalid input. Enter a valid positive number.\n");
		}
	} while (!validInput);
}
