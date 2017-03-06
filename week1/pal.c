#include<stdio.h>
int palindrome(int temp,int num)
{
    int rev=0;
    int digit;

    temp=num;

    while(num!=0)
         {
            digit=num%10'
            rev=(rev*10)+digit;
            num=num/10;
         }
}

int main()
{
printf("\nEnter a number = \n");
scanf("%d",num);
temp=num;
printf("\nThe reversed number of %d =%d",temp,rev);


if(temp==rev)
   printf("\nThe number is a palindrome\n");
else
   printf("\nThe number is not a palindrome\n");
}
