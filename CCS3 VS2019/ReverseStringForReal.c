#include <stdio.h>
#include <string.h>

void stringReverse(char *testString[], int char1, int char2) {
    printf("%s, %d\n", testString, char2);
    char temp = testString[char1];
    printf("%c\n", testString[char2]);
    testString[char1] = testString[char2];
    printf("%s\n", testString);
    testString[char2] = temp;

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
    printf("%d", strlen(test));
    int stringLength = strlen(test) - 1;
;    stringReverse(&test, 0, stringLength);
    printf("You typed: %s", test);

    return 0;
}
