// Programmer: Thecanniestbadge
// Date:       06/28/2023
// Program Name: Bubble Sort
// Chapter:    Array
// Description: This program asks the user to enter 10 double values into an array, then displays the unsorted array using for loops and nested if statement in the third for loop.
//              It then sorts the array using a bubble sort algorithm and displays the sorted array using for loops and nested if statement in the third for loop.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // Constant and Variable Declarations
    double array[10];
    double temp;
    int i;
    int j;

    // *** Your program goes here ***
    // Input values
    for (i = 0; i < 10; i++) {
        printf("Enter a value for array element [%d]: ", i);
        scanf("%lf", &array[i]);
    }
    printf("\n"); // Blank line
    // Display unsorted array
    printf("The un-sorted array:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2lf\n", array[i]);
    }
    // Bubble sort
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\n"); // Blank line
    // Display sorted array
    printf("The sorted array:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2lf\n", array[i]);
    }
    printf("\n"); // Blank line
    return 0;
} // end main()
