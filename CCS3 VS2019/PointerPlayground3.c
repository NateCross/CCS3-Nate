#include <stdio.h>
#include <stdlib.h>

int* multiply(int *a, int *b)
{
    int *c = malloc(sizeof(int));
    *c = *a * *b;
    return c;
}

main()
{
    int a=3,b=5;
    int *(*p)(int*, int*) = &multiply; /* or int* (*p)(int*, int*) = multiply; */
    int *c = (*p)(&a,&b); /* or int *c = p(&a,&b); */
    printf("Product = %d",*c);
}
