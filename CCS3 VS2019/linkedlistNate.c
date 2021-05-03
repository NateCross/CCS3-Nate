#include<stdio.h>
#include<stdlib.h>

// Nate Cruz 2021

typedef struct node *nodeptr;
typedef struct node
{
	int x;
	nodeptr next;
}Node;

int menu();
void addAtHead(nodeptr *h,int num);
void addAtTail(nodeptr *h,int num);
void display(nodeptr h);
void displayEven(nodeptr h);
int count(nodeptr h,int num);
int addAll(nodeptr h);
void deleteHead(nodeptr *h);
void deleteNum(nodeptr *h,int num);

main()
{
	nodeptr head = NULL;
	int num;
	char choice;
	do{
		choice = menu();
		switch(choice)
		{
			case 1: printf("Enter number to add: ");
					scanf("%d",&num);
					addAtHead(&head,num);
					break;
			case 2:	printf("Enter number to add: ");
					scanf("%d",&num);
					addAtTail(&head,num);
					break;
			case 3: display(head);
					break;
			case 4: displayEven(head);
					break;
			case 5:	printf("Enter number to count: ");
					scanf("%d",&num);
					printf("%d in the list: %d\n",num,count(head,num));
					getch();
					break;
			case 6:	printf("The sum of all the numbers in list: %d",addAll(head));
					getch();
					break;
			case 7: deleteHead(&head);
					break;
			case 8: printf("Enter number to delete: ");
					scanf("%d",&num);
					deleteNum(&head,num);
					break;
		}
	}while (choice != 9);
}

int menu()
{
	int c;
	do{
		system("cls");
		printf("MENU\n");
		printf("1. Add at head\n");
		printf("2. Add at tail\n");
		printf("3. Display all\n");
		printf("4. Display even\n");
		printf("5. Count nodes\n");
		printf("6. Display sum\n");
		printf("7. Delete at head\n");
		printf("8. Delete node\n");
		printf("9. Exit\n");
		printf("Enter choice: ");
		scanf("%d",&c);
		if (c < 1 || c > 9)
		{
			printf("\nError in choice. \nPress any key to continue.");
			getch();
		}
	}while(c < 1 || c > 9);
	return c;
}

void addAtHead(nodeptr *h,int num)
{
	nodeptr temp = (nodeptr) malloc(sizeof(Node));
	temp -> x = num;
	temp -> next = *h;
	*h = temp;
	printf("%d added at head",num);
	getch();
}

void addAtTail(nodeptr *h,int num)
{
	nodeptr temp = (nodeptr) malloc(sizeof(Node));
	temp -> x = num;
	if (*h == NULL) //empty list
	{
		temp -> next = *h;
		*h = temp;
	}
	else
	{
		nodeptr p = *h;
		while (p -> next != NULL)
			p = p -> next;
		temp -> next = p -> next;
		p -> next = temp;
	}
	printf("%d added at tail",num);
	getch();
}

void display(nodeptr h)
{
	nodeptr p = h;
	if (p != NULL)
		while (p != NULL)
		{
			printf("%d ",p -> x);
			p = p -> next;
		}
	else
		printf("List is empty.");
	getch();
}

void displayEven(nodeptr h)
{
    nodeptr p = h;
	if (p != NULL)
		while (p != NULL)
		{
		    if (p -> x % 2 == 0)
                printf("%d ",p -> x);
			p = p -> next;
		}
	else
		printf("List is empty.");
	getch();
}

int count(nodeptr h,int num)
{
    nodeptr p = h;
    if (p != NULL) {
        for (int i = 1; i < num; i++) {
            if (p -> next != NULL)
                p = p -> next;
            else {
                printf("That number does not exist! Try again. \n");
                return 0;
            }
        }
        return p -> x;
        // printf("%d \n", p -> x);
        printf("Press any key to continue.\n");
    }
    else
        printf("List is empty.");
    getch();
}

int addAll(nodeptr h)
{
    nodeptr p = h;
    int sum = 0; //It bugs if it wasn't initialized to 0 so might as well
    if (p != NULL) {
        while (p != NULL) {
            sum += p -> x;
            p = p -> next;
        }
        return sum;
    }
    else
        printf("List is empty.");
    getch();
}

void deleteHead(nodeptr *h)
{
	if (*h == NULL)
		printf("List is empty.");
	else
	{
		nodeptr p = *h;
		*h = p -> next;
		printf("Head deleted.");
	}
	getch();
}

void deleteNum(nodeptr *h,int num)
{
	if(*h == NULL)
		printf("List is empty.");
	else
	{
		nodeptr p = *h;
		if (p -> x == num) //at the head
			*h = p -> next;
		else //not at the head
		{
			while (p -> next != NULL && p -> next -> x != num)
				p = p -> next;
			if (p -> next != NULL)
			{
				p -> next = p -> next -> next;
				printf("%d deleted.",num);
			}
			else
				printf("%d not found",num);
		}
	}
	getch();
}
