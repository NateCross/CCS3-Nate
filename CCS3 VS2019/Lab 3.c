#include <stdio.h>

// Nate Cruz 2021

int main() {

    //TODO: look for more elegant solution for negative numbers

    int input[100], runAgain = 0, highestValue = -99999; //highestValue is set at that to account for negative numbers. If it would start at 0, highestValue would never change

    do {
        //Input for each of the values. Nothing special here.
        for (int inputCounter = 1; inputCounter <= 5; inputCounter++) {
            printf("Input %d: ", inputCounter);
            scanf("%d", &input[inputCounter]);

            //Compares if the number input is higher than what was already input. If higher, it will replace highestValue.
            if (input[inputCounter] > highestValue)
                highestValue = input[inputCounter];
        }

        printf("Highest value: %d \n", highestValue);

        //Code to loop it again. It's in a do-while to ensure this runs at least once.
        printf("Enter 1 to quit. Enter anything else to continue: ");
        scanf("%d", &runAgain);
    } while(runAgain != 1);

    return 0;
}
