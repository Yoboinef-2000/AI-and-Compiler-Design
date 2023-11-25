#include <stdio.h>
#include <string.h>

/**
 * main - MAIN
 *      
 * Description: this function identifies whether a given line
 * is a comment or not
 *
 * Return: 0
 */

int main()
{
        // Declare a character array to store the input string
        char input[100];

        // Asking the user to enter a comment
        printf("Enter comment: ");

        // Reading the input string
        fgets(input, sizeof(input), stdin);

        // Checking if the string starts with '//'
        if (strstr(input, "//") == input)
        {
                // If it starts with '//', it is a comment
                printf("It is a comment\n");
        }

        else if (strstr(input, "/*") == input)
        {
                // If it starts with '/*', it might be a comment block
                printf("It might be a comment block\n");
        }

        else
        {
                // If it doesn't start with '//', it is not a comment
                printf("It is not a comment\n");
        }
        return (0);
}
