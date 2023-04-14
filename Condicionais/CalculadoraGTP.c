#include <stdio.h>
#include <stdlib.h>

double first_value, second_value, sum, difference, quotient, product;
char operator;

void ReadValues()
{
    printf("\nEnter the first value: ");
    scanf("%lf", &first_value);
    printf("\nEnter the second value: ");
    scanf("%lf", &second_value);
}

int CalculateValues(char operator)
{
    do
    {
        printf("\nEnter an operator (+, -, /, *): ");
        fflush(stdin);
        scanf("%c", &operator);
        switch (operator)
        {
        case '+':
            sum = first_value + second_value;
            printf("The sum is: %.2lf\n", sum);
            break;
        case '-':
            difference = first_value - second_value;
            printf("The difference is: %.2lf\n", difference);
            break;
        case '/':
            if (second_value == 0)
            {
                printf("\nCannot divide by zero\n");
                return operator;
            }
            else
            {
                quotient = first_value / second_value;
                printf("The quotient is: %.2lf\n", quotient);
            }
            break;
        case '*':
            product = first_value * second_value;
            printf("The product is: %.2lf\n", product);
            break;
        default:
            printf("Invalid operator\nEnter:\n\t'+' To add\n\t'-' To subtract\n\t'/' To divide\n\t'*' To multiply\n");
            continue;
        }
    } while (operator != '+' && operator != '-' && operator != '/' && operator != '*');
    return operator;
}

int main ()
{
    ReadValues();
    CalculateValues(operator);
    printf("\nPress the Enter key to exit the program");
    getchar();
    return 0;
}