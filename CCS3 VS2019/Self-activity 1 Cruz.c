#include<stdio.h>

// Nate Cruz 2021

void add(int n1, int n2) {
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void subtract(int n1, int n2) {
	if (n1 > n2)
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
    else
        printf("%d - %d = %d\n", n2, n1, n2 - n1);
}

void multiply(int n1, int n2) {
	printf("%d * %d = %d\n", n1, n2, n1 * n2);
}

void divide(int n1, int n2) {
    if (n1 > n2)
        printf("%d / %d = %d\n", n1, n2, n1 / n2);
    else
        printf("%d / %d = %d\n", n2, n1, n2 / n1);
}

int main() {
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("Adding: ");
	add(num1, num2);
	printf("Subtracting: ");
	subtract(num1, num2);
	printf("Multiplying: ");
	multiply(num1, num2);
	printf("Dividing: ");
	divide(num1, num2);

	return 0;
}
