#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int aux = 0; // Initialize aux to 0

    // Iterate through the list of numbers
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 4 == 0) { // Check if the current number is even
            aux++; // Increment aux if the current number is even
        }
    }

    printf("There are %d even numbers in the list.\n", aux); // Print the count of even numbers

    return 0;
}
