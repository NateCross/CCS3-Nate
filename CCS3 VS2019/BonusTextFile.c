#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Nate Cruz 2021

/*
INSTRUCTIONS:
Write a program that will read from a text file (you can choose the filename) and will display a tally of how many times every letter in the alphabet appears in the text file.
Note that there should be two sets of alphabets: 1 for uppercase and 1 for lowercase.
*/

//Returns a value to be used as the index for the array holding the count of the letters.
int processChar (char input) {
    if (input >= 'A' && input <= 'Z')
        return input - 65; //Uppercase letters
    else if (input >= 'a' && input <= 'z')
        return input - 71; //Lowercase letters (it's minus 71 to make 'a' start at 26, which is one more than 'Z')
    else
        return 52;
        /*
        52 is the extra "garbage" index because I'm too lazy to code an exception
        TBH though, it could be useful somehow. Like if we had to count non-letters too. Seems okay...?
        */

}

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

void readFile(char *fileName, FILE *textFile, int *charCounter) {
    system("cls");
    textFile = fopen(fileName, "r");

    char c;
    do {
        c = fgetc(textFile);
        charCounter[processChar(c)]++;
        printf("%c", c);
    } while(c != EOF);

    fclose(textFile);

    printf("\n- - - - -\n");
}

void displayCharCounter(int *charCounter, int index, char letter) {
    printf("%c : %d\n", letter, charCounter[index]);
    if (index == 25)
        displayCharCounter(charCounter, 26, 'a');
    else if (index == 51)
        return;
    else
        displayCharCounter(charCounter, ++index, ++letter);
}

int main() {
    FILE *fptr;
    char fileName[100];
    int charCounter[53] = {0};

    inputFileName(fileName, fptr);

    readFile(fileName, fptr, charCounter);

    displayCharCounter(charCounter, 0, 'A');

    printf("\nPress any key to end.");

    getch();

    return 0;
}
