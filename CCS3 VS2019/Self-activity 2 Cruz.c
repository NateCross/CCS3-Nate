#include<stdio.h>

// Nate Cruz 2021

/*
int add(int n1,int n2);
int subtract(int n1,int n2);
int multiply(int n1,int n2);
int divide(int n1,int n2);
*/

int menu(int n1, int n2, int *result, char *operation) {
        int choice;
        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        do {
            printf("Choice: ");
            scanf("%d", &choice);
            if (choice == 1) { //Addition
                *result = n1 + n2;
                *operation = '+';
            }
            else if (choice == 2) { //Subtraction
                *result = n1 - n2;
                *operation = '-';
            }
            else if (choice == 3) { //Multiplication
                *result = n1 * n2;
                *operation = '*';
            }
            else if (choice == 4) { //Division
                *result = n1 / n2;
                *operation = '/';
            }
            else
                printf("Incorrect input. Try again. \n");
        } while (choice < 1 || choice > 4);

        /* DEBUG PURPOSES
        printf("Result I think is: %d\n", *result);
        */

        /*
        do {
            printf("Choice: ");
            scanf("%d", &choice);
            if (choice == 1) { //Addition
                *result = n1 + n2;
                *operation = "+";
            }
            else if (choice == 2) //Subtraction
                return n1 - n2;
            else if (choice == 3) //Multiplication
                return n1 * n2;
            else if (choice == 4) //Division
                return n1 / n2;
            else
                printf("Incorrect input. Try again. \n\n");
        } while (choice < 1 || choice > 4);
        */

        // TEST CODE BELOW
        /*
        while (choice < 1 || choice > 4) {
            printf("Choice: ");
            scanf("%d", &choice);
            if (choice == 1) //Addition
                return n1 + n2;
            else if (choice == 2)
                return n1 - n2;
            else if (choice == 3)
                return n1 * n2;
            else if (choice == 4)
                return n1 / n2;
            else
                printf("Incorrect input. Try again. \n\n");
        }
        */
}

main() {
	int num1,num2,res;
	char op;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	menu(num1, num2, &res, &op);
	printf("Result: %d %c %d = %d", num1, op, num2, res);
	return 0;
}
/*
int add(int n1,int n2)
{
	int s;
	s = n1 + n2;
	return s;
}

int subtract(int n1,int n2)
{
	int d = n1 - n2;
	return d;
}
int multiply(int n1,int n2)
{
	return (n1 * n2);
}

int divide(int n1,int n2)
{
	if (n1 > n2)
		return (n1 / n2);
	else
		return (n2 / n1);
}
*/

