#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int aux = 0; // Initialize aux to 0

    // Iterate through the list of numbers
    for (int i = 0; i < 5; i++) {
        aux += nums[i]; // Add the current number to aux
    }

    printf("The sum of the numbers is %d\n", aux); // Print the sum

    return 0;
}
