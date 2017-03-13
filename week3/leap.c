#include<stdio.h>
void main()
{
int year;
printf("Enter yhe year",year);
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
{
printf("The year is a century leap year");
}
else if(year%4==0)
{
printf("The year is a leap year");
}
else
{
printf("The year is neither a leap year nor a century leap year");
}
}



