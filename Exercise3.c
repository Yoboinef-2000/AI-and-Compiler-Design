#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isValidIdentifier - Checks whether a given identifier is valid or not.
 *
 * @identifier: Pointer to the input string representing the identifier.
 *
 * Description: This function reads the given input string and checks if it
 * is a valid identifier. An identifier must start with an alphabetical character
 * or an underscore ('_'). The remaining characters can be alphanumeric or underscores.
 * If the identifier is valid, it prints "Valid identifier"; otherwise, it prints
 * "Not a valid identifier".
 *
 * Return: 0
 */
int isValidIdentifier(char *identifier)
{
        // Check if the first character is alphabetical or underscore
        if (!isalpha(identifier[0]) && identifier[0] != '_')
        {
                printf("Not a valid identifier\n");
                return (0);
        }

        // Check the remaining characters
        for (int i = 1; i < strlen(identifier); i++)
        {
                if (!isalnum(identifier[i]) && identifier[i] != '_')
                {
                printf("Not a valid identifier\n");
                return (0);
                }
        }

        // If all checks pass, it is a valid identifier
        printf("Valid identifier\n");
        return (0);
}

/**
 * main - Main function to test the isValidIdentifier function.
 *
 * Description: This function prompts the user to enter an identifier,
 * reads the input, and then calls the isValidIdentifier function to
 * determine whether it is a valid identifier or not.
 *
 * Return: 0
 */
int main()
{
        // Declare a character array to store the input identifier
        char identifier[100];

        // Prompt the user to enter an identifier
        printf("Enter an identifier: ");

        // Read the input identifier
        scanf("%s", identifier);

        // Call the function to check if it is a valid identifier
        isValidIdentifier(identifier);

        return (0);
}
