#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i;
float a[20],sum1=0,sum2=0,sum3=0,mean,var,sd;
clrscr();
printf("Enter the limit(MAX-20):");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
scanf("%f",&a[i]);
printf("\nEntered numbers are:");
for(i=0;i<n;i++)
printf("%f ",a[i]);
for(i=0;i<n;i++)
sum1=sum1+a[i];
mean=sum1/n;
 for(i=0;i<n;i++)
 {
 sum2=a[i]-mean;
 sum3=(sum2*sum2)+sum3;
 }
sd=sqrt(sum3/n);
var=sd*sd;
printf("\nThe mean of given numbers is %f",mean);
printf("\nThe standard deviation of given numbers is %f",sd);
printf("\nThe variance of the given numbers is %f",var);
getch();
}