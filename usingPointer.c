#include<stdio.h>

struct Student
{
	char Name[20];
	int Roll;
	float mark;
} ;
void getInfo(struct Student *temp);
void getInfo(struct Student *temp);


void main()
{
	struct Student s;
	getInfo(&s);
    // & is compulsory
	display(&s);
}

void getInfo(struct Student *temp){
	printf("Enter name of a students:\n");
	scanf("%s",&temp->Name);
	printf("Enter Roll No. of a students:\n");
	scanf("%d",&temp->Roll);
	printf("Enter Marks of a students:\n");
	scanf("%f",&temp->mark);
}
void display(struct Student *temp)
{
	printf("\nThe information of a Student:\n");
	printf("\nName\t Roll No. \t Mark:\n");
	printf(".............................:\n");
	printf("%s\t %d \t\t %.2f\n",temp->Name,temp->Roll,temp->mark);
}


