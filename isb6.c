//Write a program to calculate the average of three numbers
//Sol(6)-Userdefined Values
#include <stdio.h>
int main()
{
int n1,n2,n3,t;
float avg;

printf("\n Enter first number:");
scanf("%d",&n1);

printf("\n Enter second number:");
scanf("%d",&n2);

printf("\n Enter third number:");
scanf("%d",&n3);

t=(n1+n2+n3);
avg=t/3;
printf("\n Average=%f",avg);
}