#include<stdio.h>
#include<conio.h>

void main()
{
  char choice;
  clrscr();
  do{
     printf("you pressed contine\n");
     printf("enter y to continue");
   //  choice = getchar();
     choice = getch();
  }while(choice=='y');
  getch();
}