#include<stdio.h>

struct Complex{
    int real;
    int img;
};

struct Complex getData(struct Complex);
void calculate(struct Complex,struct Complex);
void display(struct Complex);

int main() {
    struct Complex c1,c2;
    //ans variable is removed
    printf("Enter value of two complex\n");
    c1=getData(c1);
    c2=getData(c2);
    calculate(c1,c2);
    //display is removed
    
   
    return 0;
}

struct Complex getData(struct Complex temp){
    printf("Enter real part and imaginary part: ");
    scanf("%d%d",&temp.real,&temp.img);
    return temp;
}

void calculate(struct Complex c1,struct Complex c2){
    struct Complex ans;
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    // changes made here. instead of return answer and passing to display
    // we can pass answer to display directly and remove display from main
    display(ans);
}

void display(struct Complex temp){
    if(temp.img>=0){
        printf("Ans is %d+%di",temp.real,temp.img);
    }else{
         printf("Ans is %d%di",temp.real,temp.img);
    }
}

