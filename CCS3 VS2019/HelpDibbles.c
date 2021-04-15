#include <stdio.h>

int main() {
    char x[5], input;
    int a;

    for (a = 0; a < 5; a++) {
        fflush(stdin);
        printf("Character %d: ", a+1);
        scanf("%c", &input);
        x[a] = input;
    }
}
