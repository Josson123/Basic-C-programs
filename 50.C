#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char a[100],b[100];
int i,j=0,len=0,count=0;
clrscr();
printf("Enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
 len=len+1;
printf("\nThe string is:");
puts(a);
 for(i=len-1;i>=0;i--)
 {
  b[j]=a[i];
  j++;
 }
for(i=0;i<len;i++)
 {
 if (a[i]==b[i])
 count=count+1;
 }
printf("count=%d",count);
 sleep(1);
if(count==len)
printf("Entered string is palindrome");
else
printf("Not palindrome");
getch();
}