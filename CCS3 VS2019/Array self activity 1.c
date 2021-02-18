#include <stdio.h>

// Nate Cruz 2021

/*
Write a program that will display the array elements in reverse order. You may opt to ask for inputs or provide initial values to the array.
You can also declare your array size at 5 or 10.
Submit your C file.
*/

int main() {
    int array[5] = {1, 2, 3, 4, 5}; //Testing declaring values myself

    for (int count = 5; count >= 1; count--) {
        printf("%d \n", array[count-1]);
    }

    return 0;
}
