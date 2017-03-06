#include<stdio.h>
int reverse(int num)
{
    int rev=0;
    int digit;

    int temp=num;

    while(num!=0)
         {
            digit=num%10;
            rev=(rev*10)+digit;
            num=num/10;
         }
    return rev;
}

int main()
{
int num,temp;
printf("\nEnter a number = \n");
scanf("%d",&num);
temp=reverse(num);
printf("\nThe reversed number of %d =%d",temp,num);
if(temp==num)
   printf("\nThe number is a palindrome\n");
else
   printf("\nThe number is not a palindrome\n");
}
