#include<stdio.h>
int ADD(int x,int y){
    printf("The addition of given number is : %d",x+y);
}
int MUL(int x,int y){
    printf("The multiplication of given number is : %d",x*y);
}
float DIV(float x, float y) {
    if (y == 0)
        printf("Division by zero is not allowed.\n");
    else
        printf("The division of given number is = %.2f", x / y);
        // %.2f ka mtlb hai .2 btarha h ki . ke do age tk ke btao aur f mane float
}
int SUB(int x,int y){
    printf("The substraction of given number is : %d",x-y);
}

void main(){
    int a,b,operator;
    char repeat;
    do
    {
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("INSTRUCTIONS \n 1 for sum \n 2 for multiply \n 3 for subtraction \n 4 for divide ");
    printf("\nEnter command : ");
    scanf("%d",&operator);

    if (operator==1)
    {
        ADD(a,b);  
    }
    else if (operator==2)
    {
        MUL(a,b);
    }
    else if (operator==3)
    {
        SUB(a,b);
    }
    else if (operator==4)
    {
        DIV(a,b);
    }
    else{
        printf("Please upload a valid command :)");
    }
    printf("\nDo you wanna use it again (y/n) - ");
    scanf(" %c",&repeat);
    } while (repeat=='y'||repeat=='Y');
    if(repeat=='n'||repeat=='N')
    {
        printf("Thanks for using our calculator");
    }
}
