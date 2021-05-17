#include <stdio.h>
#include <string.h>

void test(int *peepee, char *poopoo) {
    printf("%d, %s\n", *peepee, poopoo);
    strcat(poopoo, " peepee");
    (*peepee)++;
    printf("%d\n", *peepee);
}

int main() {
    int peepee = 0;
    printf("%d\n", peepee);
    printf("%d\n", &peepee);
    peepee = 69;
    printf("%d\n\n", &peepee);
    char poopoo[100] = {"poopoo"};
    printf("%s, %d\n", poopoo, peepee);
    test(&peepee, &poopoo);
    printf("%d, %s\n", peepee, poopoo);
    return 0;
}
