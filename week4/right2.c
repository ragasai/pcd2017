#include<stdio.h>
int right2(int x,int n)
{
	for(int i=0;i<n;i++)
	{
		if(x%2==0)
		{
			x=x>>1;
		}
		else
		{
			x=x>>1;
			x=x|(1<<(4*8)-1);
		}
	}
return x;
}

int main()
{
	int n,x,y;
	printf("Enter the number x and n = \n");
	scanf("%x%d",&x,&n);
	y=right2(x,n);
	printf("The rotated  number is = %x \n",y);
	return 0;
}

