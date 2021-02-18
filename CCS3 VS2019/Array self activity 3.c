#include <stdio.h>
#define size 10

// Nate Cruz 2021

/*
Write a program that will display the smallest number that is stored in the array. You may opt to ask for inputs or provide initial values to the array.
You can also declare your array size at 5 or 10.
Submit your C file.
*/

int main() {
    int array[size], smallestNumber;

    //Made this specific exception to input the first number and give it to smallestNumber. Otherwise, this would not work on all positive numbers since smallestNumber = 0.
    printf("Input value 1: ");
    scanf("%d", &array[0]);
    smallestNumber = array[0];

    //User input of values. Starts at 2 since we already did 1 above.
    for (int count = 1; count < size; count++) {
        printf("Input value %d: ", count+1);
        scanf("%d", &array[count]);

        //This checks if the number input is smaller than what is currently the smallestNumber, replacing if so
        if (array[count] < smallestNumber)
            smallestNumber = array[count];
    }

    printf("Smallest number: %d", smallestNumber);

    return 0;
}
