#include<stdio.h>
void main(){
    int a,b,sum,multiply,operator,subtraction;
    float division;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("INSTRUCTIONS \n 1 for sum \n 2 for multiply \n 3 for subtraction \n 4 for divide ");
    printf("\nEnter command : ");
    scanf("%d",&operator);
    if(b==0&&operator==4){
        printf("Division by zero is not allowed");
    }
    else if (operator==1)
    {
        sum=a+b;
        printf("The sum of given number is : %d",sum);
    }
    else if (operator==2)
    {
        multiply=a*b;
        printf("The multiplication of given number is : %d",multiply);
    }
    else if (operator==3)
    {
        subtraction=a-b;
        printf("The subtraction of given number is : %d",subtraction);
    }
    else if (operator==4)
    {
        division=(float)a/b;
        printf("The division of given number is : %.2f",division);
    }
    else{
        printf("Please upload a valid command :)");
    }
}
