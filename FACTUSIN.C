#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int a,b;
clrscr();
printf("Enter the number :");
scanf("%d",&a);
b=fact(a);
printf("The factorial of %d is %d ",a,b);
getch();
}
int fact(int a)
{
if(a==1)
return(1);
else
return(a*fact(a-1));
}