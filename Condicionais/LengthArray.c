#include <stdio.h>

// Function to find the highest value in an array
int max(int array[], int length)
{
  // Initialize the max value to the first element in the array
  int max = array[0];

  // Iterate over the remaining elements in the array
  for (int i = 1; i < length; i++)
  {
    // If the current element is greater than the max value, update the max value
    if (array[i] > max)
      max = array[i];
  }

  // Return the max value
  return max;
}

int main()
{
  // Define an array of integers
  int array[] = { 1, 2, 3, 4, 5 };

  // Get the length of the array
  int length = sizeof(array) / sizeof(int);

  // Get the highest value in the array
  int max_value = max(array, length);

  // Print the highest value
  printf("The highest value in the array is: %d\n", max_value);

  return 0;
}
