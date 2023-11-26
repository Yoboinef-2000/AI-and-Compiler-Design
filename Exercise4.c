#include <stdio.h>
#include <string.h>

/**
 * validateOperator - This function validates and prints the operator type.
 *
 * @operator: The input operator to validate.
 *
 * Description: This function checks the given input against a set of known
 * operators and prints the corresponding operator type. If the input does
 * not match any known operator, it prints "Not a valid operator."
 */
void validateOperator(char *operator)
{
        if (strcmp(operator, "+") == 0)
        {
                printf("Addition\n");
        }
        else if (strcmp(operator, "-") == 0)
        {
                printf("Subtraction\n");
        }
        else if (strcmp(operator, "*") == 0)
        {
                printf("Multiplication\n");
        }
        else if (strcmp(operator, "/") == 0)
        {
                printf("Division\n");
        }
        else if (strcmp(operator, "%") == 0)
        {
                printf("Modulus\n");
        }
        else
        {
                printf("Not a valid operator.\n");
        }
}

/**
 * main - The main function for running the lexical analyzer.
 *
 * Description: This function prompts the user to enter an operator, reads
 * the input, and then calls the validateOperator function to check and
 * print the operator type.
 *
 * Return: 0
 */
int main()
{
        char operator[10];

        // Prompt the user to enter an operator
        printf("Enter any operator: ");

        // Read the input operator
        scanf("%s", operator);

        // Call the function to validate and print the operator type
        validateOperator(operator);

        return 0;
}
