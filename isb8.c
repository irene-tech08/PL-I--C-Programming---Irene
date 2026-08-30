//Write a program to swap two numbers using a temporary variable
//Sol(8)-Userdefined Values
#include <stdio.h>
int main()
{
int a,b,temp;
printf("\n Enter first number:");
scanf("%d",&a);

printf("\n Enter second number:");
scanf("%d",&b);

temp=a;
a=b;
b=temp;
printf("\n After Swapping :");
printf("\n First number =%d",a);
printf("\n Second number =%d",b);
}