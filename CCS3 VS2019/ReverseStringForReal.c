#include <stdio.h>
#include <string.h>

void stringReverse(char *testString[], int char1, int char2) {
    char temp;
    printf("%s, %d\n", testString, char2);
    strncpy(temp, &testString[char1], 1);
    //char temp = testString[char1];
    printf("%c\n", testString[char2]);
    strncpy(testString+char1, testString+char2, 1);
    //testString[char1] = testString[char2];
    printf("%s\n", testString);
    strncpy(testString+char2, temp, 1);
    //testString[char2] = temp;

    printf("Looping: %s\n", testString);

    if (char1++ == char2 || char1 == char2)
        return;
    else
        stringReverse(testString, char1++, char2--);
}

int main() {
    char test[50];

    fflush(stdin);
    printf("Type something: ");
    gets(test);
    printf("%d\n", strlen(test));
    int stringLength = strlen(test) - 1;
;    stringReverse(&test, 0, stringLength);
    printf("You typed: %s", test);

    return 0;
}
