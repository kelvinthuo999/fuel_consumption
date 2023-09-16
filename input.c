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

/**
 * getStr - fetch string input from the user
 * Return: Void
 */

void getStr(const char *prompt, char *str_input, int max_len)
{
	/* variable declaration */
	char temp_arr[max_len]; /* temp buffer to hold user input */
	bool validInput = false;

	do {
		printf("%s: ",prompt);

		/* fetch user input */
		if (scanf("%s", temp_arr) == 1)
		{
			if (strlen(temp_arr) <= max_len - 1)
			{
				validInput = true;
				strcpy(str_input, temp_arr);
			}
			else
			{
				printf("Input is too long.\n");
			}
		}
		else
		{
			scanf("%*[^\n]");
			scanf("%*c");
			fprintf(stderr, "Error reading input. Please try again.\n");
		}
	} while (!validInput);
}
