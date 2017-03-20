#include<stdio.h>
int right(int x,int n)
{
n=n%(4*8);
int l=4*8-n;
return x>>n|x<<l;
}
int main()
{
int n;
int x;
printf("Enter the value x and n = \n");
scanf("%x%x",&n,&x);
int y=right(x,n);
printf("The rotated right number is = %x\n",y);
}

