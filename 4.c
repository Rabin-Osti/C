// Online C compiler to run C program online

#include<stdio.h>
#include<string.h>

struct Student
{
	char Name[20];
	int Roll;
	float mark;
};

void getInfo(struct Student [],int);
void displayInfo(struct Student [],int);

void main()
{
    struct Student s[20];
	int i,n;
	printf("Enter how many Students?\n");
	scanf("%d",&n);
	printf("Enter information of %d Students\n",n);
    getInfo(s,n);
    displayInfo(s,n);
}

void getInfo(struct Student temp[],int n){
    int i;
    for(i=0; i<n; i++)
	{
		printf("Enter name of a students:\n");
	    fflush(stdin);
		gets(temp[i].Name);
		printf("Enter Roll No. of a students:\n");
		scanf("%d",&temp[i].Roll);
		printf("Enter Marks of a students:\n");
		scanf("%f",&temp[i].mark);
	}
}

void displayInfo(struct Student temp[],int n){
    int i;
    printf("\nThe information of a Student:\n");
	printf("\nName\t Roll No. \t Mark:\n");
	printf(".............................:\n");
	for(i=0; i<n; i++)
	{
		printf("%s\t %d \t\t %.2f\n",temp[i].Name,temp[i].Roll,temp[i].mark);
	}
}


