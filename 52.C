#include<stdio.h>
#include<conio.h>
void main()
{
char a[30],b[30],c[100];
int i,j,len1=0,len2=0,flag=0;
clrscr();
printf("Enter the 1st string:");
gets(a);
 for(i=0;a[i]!='\0';i++)
  len1=len1+1;
printf("Enter the 2nd string:");
gets(b);
 for(i=0;b[i]!='\0';i++)
  len2=len2+1;
 for(i=0;a[i]!='\0';i++)
  c[i]=a[i];
 for(j=0;b[j]!='\0';j++)
  {
   c[i]=b[j];
   i++;
  }
   c[i]='\0';
printf("The concatenated string is:");
puts(c);
if(len1==len2)
{
for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==b[i])
    {
    flag=1;
    continue;
    }
  else
  break;
 }
}
if(len1==len2&&flag==1)
printf("The strings are same.");
else
printf("The strings are not same.");
for(i=0;a[i]!='\0';i++)
  c[i]=a[i];
printf("Copy of string 1 is :%s");
puts(c);
for(i=0;b[i]!='\0';i++)
  c[i]=b[i];
printf("Copy of string 2 is :%s");
puts(c);

getch();
}