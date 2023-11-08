#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a[20];
clrscr();
printf("Enter the limit(MAX-20)");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The numbers are:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n;i++)
 {
 if(a[i]>a[i+1])
 a[i+1]=a[i];
 else
 {
 for(j=i;j>=0;j--)
 a[j]=a[i+1];
 }
 }
printf("\nThe greatest of the given numbers is %d.",a[i]);
getch();
}