#include <stdio.h>
#include <conio.h>

// Nate Cruz 2021

typedef struct node *nodeptr;
typedef struct node {
    int x;
    nodeptr next;
} Node;

void testOutput (nodeptr *p) {
    (*p) -> x = 21;
    printf("%d\n", (*p)->x);
}

int main () {
    nodeptr *head;
    head = (nodeptr) malloc(sizeof(Node));
    //head->x = 15;
    //printf("%d\n", head->x);
    testOutput(head);
    return 0;

}
