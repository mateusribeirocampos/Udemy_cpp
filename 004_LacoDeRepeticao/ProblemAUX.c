/*Problem: Write a program that reads a list of integers from the user, and then prints the number of even and odd numbers in the list.

To solve this problem, you can use the aux variable to keep track of the number of even and odd numbers in the list. Here is one way you can approach this problem:

Initialize two variables, even_count and odd_count, to 0. These variables will be used to keep track of the number of even and odd numbers in the list, respectively.

Read the list of integers from the user using a loop.

For each integer in the list, use the modulo operator % to check if it is even or odd. If the number is even, increment even_count by 1. If the number is odd, increment odd_count by 1.

After the loop finishes, print the number of even and odd numbers in the list.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int even_count = 0; // Initialize even_count to 0
    int odd_count = 0;  // Initialize odd_count to 0

    printf("Enter a list of integers, separated by spaces. Press Enter to finish.\n");

    // Read the list of integers from the user
    while (scanf("%d", &num) == 1)
    {
        if (num % 2 == 0)
        {                 // Check if the current number is even
            even_count++; // Increment even_count if the current number is even
        }
        else
        {
            odd_count++; // Increment odd_count if the current number is odd
        }
    }
    printf("There are %d even numbers and %d odd numbers in the list.\n", even_count, odd_count);
    return 0;
}
/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int aux = 0;

    for (int i = 0; i < 10; i++)
    {
        if (list[i] % 2 == 1)
        {
            aux++;
        }
    }
    printf("The odds numbers are: %d", aux);
    return 0;
}
*/