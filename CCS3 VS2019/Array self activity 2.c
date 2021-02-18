#include <stdio.h>
#define size 10

// Nate Cruz 2021

/*
Write a program that will display only the even numbers that are stored in the array. You may opt to ask for inputs or provide initial values to the array.
You can also declare your array size at 5 or 10.
Submit your C file.
*/

int main() {
    int array[size];

    //User input of values
    for (int count = 1; count <= size; count++) {
        printf("Input value %d: ", count);
        scanf("%d", &array[count-1]);
    }

    //Printing of even numbers, but this one is slow and unoptimized instead of marking that a number was even and setting it to another array which would probably be way faster to display
    for (int count = 1; count <= size; count++) {
        if (array[count-1] % 2 == 0)
            printf("%d \n", array[count-1]);
    }

    return 0;
}



