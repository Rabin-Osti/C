#include<stdio.h>

struct Student
{
	char Name[20];
	int Roll;
	float mark;
};

void getInfo(struct Student []);
void displayInfo(struct Student []);

void main()
{
    struct Student s[10];
    getInfo(s); // array affai ma pointer ho tei vayera memory ma update hunxa
	// yes ma chai &s hudaina &s lekhesi temp ma *temp lekhna parxa ra arrow operator
	//use garna parxa
    displayInfo(s);
}

void getInfo(struct Student temp[]){
    int i;
    printf("Enter details of 10 students: \n");
    for(i=0; i<10; i++)
	{
		printf("Enter name of a students:\n");
        gets(temp[i].Name)
		printf("Enter Roll No. of a students:\n");
		scanf("%d",&temp[i].Roll);
		printf("Enter Marks of a students:\n");
		scanf("%f",&temp[i].mark);
	}
}

void displayInfo(struct Student temp[]){
    int i;
    printf("\nThe information of a Student:\n");
	printf("\nName\t Roll No. \t Mark:\n");
	printf(".............................:\n");
	for(i=0; i<10; i++)
	{
		printf("%s\t %d \t\t %.2f\n",temp[i].Name,temp[i].Roll,temp[i].mark);
	}
}


