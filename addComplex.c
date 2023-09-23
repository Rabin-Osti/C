#include<stdio.h>
#include<conio.h>

struct Complex{
    int real;
    int img;
};

struct Complex getData(struct Complex);
struct Complex calculate(struct Complex,struct Complex);
void display(struct Complex);

int main() {
    struct Complex c1,c2,ans;
    printf("Enter value of two complex\n");
    c1=getData(c1);
    c2=getData(c2);
    ans = calculate(c1,c2);
    display(ans);
   
    return 0;
}

struct Complex getData(struct Complex temp){
    printf("Enter real part and imaginary part: ");
    scanf("%d%d",&temp.real,&temp.img);
    return temp;
}

struct Complex calculate(struct Complex c1,struct Complex c2){
    struct Complex ans;
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    return ans;
}

void display(struct Complex temp){
    if(temp.img>=0){
        printf("Ans is %d+%di",temp.real,temp.img);
    }else{
         printf("Ans is %d%di",temp.real,temp.img);
    }
}

