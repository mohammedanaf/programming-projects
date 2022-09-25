// Mohammed Anaf
// Calculator which follows arithmetic and relational instructions
// 23 September 2022

#include <stdio.h>

int main()
{
    // Variable declaration
    
    float number1, number2;
    char operator;

    // Project title

    printf("\n\tCalculator\n");

    // Taking numbers as an input from user

    printf("\nEnter the value of two numbers: ");
    scanf("%f %f", &number1, &number2);

    // Displaying currently available operators

    printf("\nCurrently supported operators:\n"
             "+, -, *, /, > and <\n");

    // Taking operator as an input from user

    printf("\nEnter an operator: ");
    scanf(" %c", &operator);

    // Logic of the project and displaying output to the user

    switch(operator)
    {
        case '+':
            printf("\nThe addition of two numbers will be: %0.2f\n", number1 + number2);
            break;

        case '-':
            printf("\nThe subtraction of two numbers will be: %0.2f\n", number1 - number2);
            break;

        case '*':
            printf("\nThe multiplication of two numbers will be: %0.2f\n", number1 * number2);
            break;

        case '/':
            printf("\nThe division of two numbers will be: %0.2f\n", number1 / number2);
            break;

        case '>':

            if(number1 > number2)
            {
                printf("\nThe maximum of two numbers will be: %0.2f\n", number1);
            }

            else
            {
                printf("\nThe maximum of two numbers will be: %0.2f\n", number2);
            }

            break;

        case '<':

            if(number1 < number2)
            {
                printf("\nThe minimum of two numbers will be: %0.2f\n", number1);
            }

            else
            {
                printf("\nThe minimum of two numbers will be: %0.2f\n", number2);
            }
            
            break;

        default:
            printf("\n%c is an invalid operator.\n", operator);
    }

    return 0;
}