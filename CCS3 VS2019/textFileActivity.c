#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// Nate Cruz 2021

/* Write a program that will read from a text file and will count the number of characters that are in the text file.
Special characters will be included in the counting (blank space, punctuation marks, etc.).
Output to the screen the number of characters.

The program that will read is the only C file to be uploaded. Make sure that you have a text file that you can read when you test your program. */

//Allows user to input file name.
void inputFileName(char *name, FILE *textFile) {
    system("cls");
    fflush(stdin);
    printf("Input file name: ");
    gets(name);

    //Checks if the user put ".txt". If not, appends it to the filename.
    if (strstr(name, ".txt") == NULL)
        strncat(name, ".txt", 4);

    //Checks if file exists. If not, runs the function again.
    if (textFile = fopen(name, "r")) {
        fclose(textFile);
    }
    else {
        printf("File not found. Press any key to try again.");
        getch();
        inputFileName(name, textFile);
    }
}

int readFile(char *fileName, FILE *textFile) {
    system("cls");
    textFile = fopen(fileName, "r");

    int charCount = 0;
    char c;
    do {
        c = fgetc(textFile);
        charCount++;
        printf("%c", c);
    } while(c != EOF);

    fclose(textFile);

    printf("\n- - - - -");

    return --charCount; //Apparently the loop counts the EOF as well, so might as well do this
}

int main () {
    FILE *fptr;
    char *fileName[100];

    //User inputs filename here.
    inputFileName(fileName, fptr);
    //printf("%s \n", fileName);

    //Prints file to console while getting char count
    int charCount = readFile(fileName, fptr);

    printf("\nCharacter Count: %d\n", charCount);
    printf("\nPress any key to end.");

    getch();

    return 0;
}
