#include<stdio.h>
#include<string.h>
#define max 5

// Nate Cruz 2021

typedef struct
{
      char name[50];
      float score;
      char grade;
}Student;

void Initialize(Student s[]) {
    for (int i = 0; i < max; i++) {
        s[i].name = " ";
        // strcpy(s[i].name, " "); //This gets the compiler to compile
        s[i].score = 0.0;
        s[i].grade = ' ';
    }
}

void InputScore(Student s[]) {
    for (int i = 0; i < max; i++) {
        system("cls");
        fflush(stdin);
        printf("Student %d\n", i + 1);

        printf("Name: ");
        gets(s[i].name);
        // s[i].name[strcspn(s[i].name, "\n")] = 0; //Snip the newline char for fgets
        // Apparently not needed unless you are using fgets? I should probably use fgets more though cause it's safer apparently

        printf("Score: ");
        scanf("%f", &s[i].score);
    }
}
/* ask for name and score from user. All of the array should be filled up (use a loop) */

void AssignGrade(Student s[], int i) {
    if (s[i].score >= 90.0 && s[i].score <= 100.0)
        s[i].grade = 'A';
    else if (s[i].score >= 80.0 && s[i].score <= 89.9)
        s[i].grade = 'B';
    else if (s[i].score >= 70.0 && s[i].score <= 79.9)
        s[i].grade = 'C';
    else if (s[i].score >= 60.0 && s[i].score <= 69.9)
        s[i].grade = 'D';
    else if (s[i].score >= 0.0 && s[i].score <= 59.9)
        s[i].grade = 'F';

    if (i < max)
        AssignGrade(s, i + 1);
}
/* based on each student score, assign a grade. Let your program do the assigning of the grade  of each student in the array. */

void DisplayAll(Student s[]) {
    system("cls");
    for (int i = 0; i < max; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Score: %.2f\n", s[i].score);
        printf("Grade: %c\n\n", s[i].grade);
    }
}
/* display all records in the array*/

int main()
{
    int counter = 0;
    Student student[max];
    Initialize(student);
    InputScore(student);
    AssignGrade(student, counter);
    DisplayAll(student);
    getch();

    return 0;
}
