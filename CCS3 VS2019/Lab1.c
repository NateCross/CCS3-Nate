#include<stdio.h>

// Nate Cruz 2021

void add(int input1, int input2) {
	printf("%d + %d = %d\n", input1, input2, input1 + input2);
}

void subtract(int input1, int input2) {
	printf("%d - %d = %d\n", input1, input2, input1 - input2);
}

void multiply(int input1, int input2) {
	printf("%d * %d = %d\n", input1, input2, input1 * input2);
}

void divide(int input1, int input2) {
    if (input1 > input2)
        printf("%d / %d = %d\n", input1, input2, input1 / input2);
    else
        printf("%d / %d = %d\n", input2, input1, input2 / input1);
}

int main() {
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("Adding... \n");
	add(num1, num2);
	printf("Subtracting... \n");
	subtract(num1, num2);
	printf("Multiplying... \n");
	multiply(num1, num2);
	printf("Dividing... \n");
	divide(num1, num2);

	return 0;
}
