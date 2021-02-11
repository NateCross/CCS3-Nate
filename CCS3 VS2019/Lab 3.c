#include <stdio.h>

// Nate Cruz 2021

int main() {

    //TODO: look for more elegant solution for negative numbers

    int input[100], highestValue = -99999; //highestValue is set at that to account for negative numbers. If it would start at 0, highestValue would never change

    //Input for each of the values. Nothing special here.
    for (int inputCounter = 1; inputCounter <= 5; inputCounter++) {
        printf("Input %d: ", inputCounter);
        scanf("%d", &input[inputCounter]);

        //Compares if the number input is higher than what was already input. If higher, it will replace highestValue.
        if (input[inputCounter] > highestValue)
            highestValue = input[inputCounter];
    }

    printf("Highest value: %d", highestValue);

    return 0;
}
