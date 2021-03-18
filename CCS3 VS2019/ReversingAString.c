#include <stdio.h>
#include <string.h>
#define size 50

// Nate Cruz 2021

/*
Write a program that will reverse the contents of the string (you can ask for input or just initialize your array) without using the strrev() function.
The program must have a solution that can reverse the string with different lengths.
*/

int main() {
    char str[size];
    printf("Input a string: ");
    gets(str);

    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c",str[i]);
    }
    //strlen(str) to get the length of the string. -1 to exclude the "\0" character. It prints characters because each element in the array is a character.

    return 0;
}
