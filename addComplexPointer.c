#include <stdio.h>

struct Complex{
    int real;
    int img;
};

void getData(struct Complex *);
void calculate(struct Complex *,struct Complex *,struct Complex *);
void display(struct Complex *);

int main() {
    struct Complex c1,c2,ans;
    printf("Enter value of two complex\n");
    getData(&c1);
    getData(&c2);
    calculate(&c1,&c2,&ans);
    display(&ans);
   
    return 0;
}

void getData(struct Complex *temp){
    printf("Enter real part and imaginary part: ");
    scanf("%d%d",&temp->real,&temp->img);
}

void calculate(struct Complex *c1,struct Complex *c2, struct Complex *ans){
    ans->real = c1->real + c2->real;
    ans->img = c1->img + c2->img;
}

void display(struct Complex *temp){
    if(temp->img>=0){
        printf("Ans is %d+%di",temp->real,temp->img);
    }else{
         printf("Ans is %d%di",temp->real,temp->img);
    }
}

