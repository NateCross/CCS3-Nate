#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 10

// Nate Cruz 2021

typedef struct name
{
	char lastname[15],firstname[50],mi;
}Name;

typedef struct address
{
	int streetnum;
	char streetname[20],city[20],country[20];
	int zip;
}Address;

typedef struct person
{
	Name fullname;
	Address homeaddress;
}Person;

void display(Person p[],int csize);
void edit(Person p[],int recno);
void add(Person *p[],int csize);
void fieldInput(Person *p[], int recno, int choice);
int menu(void);

main()
{
	Person p[size] = {{{"Te","Jonathan Mark",'N'},{21,"Jump St.","Dumaguete","Philippines",6200}},
										{{"dela Cruz","Juan",'C'},{101,"Hibbard Ave.","Iligan","Philippines",9200}},
										{{"Jolie","Angelina",'P'},{44,"Brad St.","Beverly Hills","Beverly Hills",9021}}, //Nice haha
										{{"Kidman","Nicole",'A'},{54,"Tom Ave.","Tanjay","USA",5200}}, //Nice hahaha
										{{"Rammstein","Static",'X'},{3,"Rock Blvd.","Roll","Ohio",5555}}
										};
	int csize=5,choice,recno;
	/* csize keeps track of the number of records in the array */
	do{
		choice = menu();
		switch(choice)
		{
			case 1:	display(p,csize);
			/* display only csize number of elements - because the rest are assumed empty*/
							break;
			case 2: add(p,csize++);
			/* whenever the add function is called, csize is automatically incremented to increase the number of elements in the array*/
			/* note that the increment will only occur after the function has executed */
							break;
			case 3: do{
								printf("Enter record to edit: ");
								scanf("%d",&recno);
								if(recno < 0 || recno > csize)
								{
									printf("Record does not exist.\nPress any key to continue.");
									getch();
								}
							/* what record to edit is asked first */
							}while(recno < 0 || recno > csize);
				edit(p,recno); /* edit based on the record number entered */
				/* edit will require that all fields of that record will be modified*/
		}
	}while(choice != 4);
	printf("Goodbye!");
	getch();
}

void display(Person p[],int csize)
{
    for (int counter = 0; counter < csize; counter++) {
        printf("%d: ", counter + 1); //Display array number properly with a + 1
        // fputs(p[counter].fullname.lastname,stdout); //Using fputs so it doesn't make a new line
        printf("%s, %s %c. - ", &p[counter].fullname.lastname, &p[counter].fullname.firstname, p[counter].fullname.mi); //Printing names
        printf("%d %s, %s, %s %d \n", p[counter].homeaddress.streetnum, &p[counter].homeaddress.streetname, &p[counter].homeaddress.city, &p[counter].homeaddress.country, p[counter].homeaddress.zip); //Printing address. Too long! Is there a cleaner way to do this? Concatenation?
    }
    printf("Press any key to continue.");
    getch();
}

void edit(Person p[],int recno)
{
}

void add(Person *p[],int csize) //TODO: Make an edit func to edit individual fields; reroute the other two functions to this one
{
    int input;
    do {
        system("cls");
        printf("New Entry\n");
        printf("1. Last Name\n");
        printf("2. First Namee\n");
        /*
        printf("3. Middle Initial: %c\n", p[csize]->fullname->mi);
        printf("4. Street Number: %d\n", p[csize]->homeaddress->streetnum);
        printf("5. Street Name: %s\n", &p[csize]->homeaddress->streetname);
        printf("6. City: %s\n", &p[csize]->homeaddress->city);
        printf("7. Country: %s\n", &p[csize]->homeaddress->country);
        printf("8. ZIP: &d\n", p[csize]->homeaddress->zip);
        */
        printf("9. Exit\n");
        printf("Input: ");
        scanf("%d", &input);
        fieldInput(p, csize, input);
    } while (input != 9);
}

void fieldInput(Person *p[], int recno, int choice) {
    switch (choice) {
        case 1:
            printf("Last Name: ");
            gets(p[recno]->fullname.lastname);
            return 0;
            break;
        case 2:
            printf("First Name: ");
            fgets(p[recno]->fullname.firstname, 50, stdin);
            return 0;
            break;
    }
}

int menu(void)
{
	int c;
	do{
		system("cls");
		printf("1. Display\n2. Add\n3. Edit\n4. Exit\nEnter choice: ");
		scanf("%d",&c);
		if(c < 1 || c > 4)
		{
			printf("Error in input. Press any key to coninue.");
			getch();
		}
	}while(c < 1 || c > 4);
	return c;
}
