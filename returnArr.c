#include<stdio.h>
#include<conio.h>

int * arrFunc(int *,int);

void main(){
    int num[] = {1,2,3,4,5},*temp,i,size=5;
    //size is optional
    clrscr();
    temp = arrFunc(num,size);
    for(i=0;i<size;i++)
    {
	printf("%d ",temp[i]);
    }
    getch();
}

int * arrFunc(int *arr,int size){
    int i;
    for(i=0;i<size;i++){
	arr[i] = arr[i]+1;
    }
    return arr;
}