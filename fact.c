#include<stdio.h>


int factorial(int num);

void main(){
    int num,ans;
    printf("Enter a number: ");
    scanf("%d",&num);
    ans=factorial(num);
    printf("Ans = %d",ans);

}

int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);
}
