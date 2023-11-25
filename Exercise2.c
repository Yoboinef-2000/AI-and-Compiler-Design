
#include <stdio.h>
#include <string.h>

/**
 * recognizeString - this function recognizes strings under 'a*', 'a*b+', 'abb'
 *
 * @str: Pointer to the input string.
 *
 * Description: This function utilizes a transition diagram to verify the input state
 *              and recognizes strings that follow the patterns 'a*', 'a*b+', and 'abb'.
 *              If the state corresponds to one of these patterns, it prints that the
 *              string is accepted. Otherwise, it prints that the string is not accepted.
 *
 * Return: 0
 */
int recognizeString(char *str)
{
        int state = 0; // Initial state

        // Store the original pointer to the beginning of the string
        char *originalStr = str;

        while (*str)
        {
                switch (state)
                {
                        case 0:
                        if (*str == 'a')
                        {
                                state = 1;
                        }
                        else
                        {
                                printf("%s is not recognized\n", originalStr);
                                return (0);
                        }
                        break;
                        case 1:
                        if (*str == 'a')
                        {
                                // 'a*'
                                state = 1;
                        }
                        else if (*str == 'b')
                        {
                                // 'a*b+'
                                state = 2;
                        }
                        else
                        {
                                printf("%s is not recognized\n", originalStr);
                                return (0);
                        }
                        break;
                        case 2:
                        if (*str == 'b')
                        {
                                // 'a*b+'
                                state = 2;
                        }
                        else
                        {
                                printf("%s is not recognized\n", originalStr);
                                return (0);
                        }
                        break;
                        case 3:
                        // 'abb'
                        if (*str == 'a')
                        {
                                state = 1;
                        }
                        else
                        {
                                printf("%s is not recognized\n", originalStr);
                                return (0);
                        }
                        break;
                }
                str++;
        }
        if (state == 1)
        {
                printf("%s is accepted under rule 'a*'\n", originalStr);
        }
        else if (state == 2)
        {
                printf("%s is accepted under rule 'a*b+'\n", originalStr);
        }
        else
        {
        printf("%s is accepted under rule 'abb'\n", originalStr);
        }
        return (0);
}

/**
 * main - MAIN
 *
 * Description: main function that is going to run the recognizeString function
 *
 * Return: 0
 */
int main()
{
        // Declare a character array to store the input string
        char input[100];

        // Prompt the user to enter a string
        printf("Enter a String: ");

         // Read the input string
        fgets(input, sizeof(input), stdin);

        // Remove the newline character from the input
        input[strcspn(input, "\n")] = '\0';

        // Call the function to recognize the string
        recognizeString(input);

        return (0);
}
~    
