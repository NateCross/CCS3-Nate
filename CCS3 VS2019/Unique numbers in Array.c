#include <stdio.h>
#define size 5

// Nate Cruz 2021

/*
Write a program that will accept inputs which will be stored into the array. Before storing in to the array, the inputted number must be checked if it already exists in the array or not.
If it does not exist, it is stored into the array. If it exists, another input will be asked.
Display the contents of the array once the array is full (5 numbers).
To practice using functions with array, the main has been provided. Note how the function has been declared. Comments have been added for further explanation.
*/

//pass the array, the input, and i
//i is important for determining the current length of array
int unique(int arr[],int input,int i) {
    for (int counter = 0; counter < i; counter++) {
        if (arr[counter] == input) {
            printf("Error! Please input a unique number.\n");
            return 0;
        }
    }

    return 1;
}

main()
{
    int i,arr[size],input;
    printf("This program will accept ");
    printf("unique inputted numbers that will be stored");
    printf(" in an array\n");

    //Input loop
    for(i = 0;i < size;i++)
    {
        printf("Enter input #%d: ", i + 1);
        scanf("%d",&input);
        if (unique(arr,input,i) == 1)
            arr[i] = input;
        else
            i--; //decrement i because ask for input again
    }

    printf("Output: ");
    //display the contents of the array afterwards
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
