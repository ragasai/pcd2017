#include<stdio.h>
 #include<math.h>

 struct complex
 {
 float real;
 float imaginary;
 };
 struct roots
 {
 struct complex root1;
 struct complex root2;
 };
int findroots(float a,float b,float c,struct complex *x,struct complex *y)
 {
 if(a==0)
 {
 return -1;
 }
 float d=b*b-4*a*c;
 if(d==0)
 {
 x->real=-b/(2*a);
 x->imaginary=0;
 y->real=-b/(2*a);
 y->imaginary=0;
 return 0;
 }
 if(d>0)
 {
 x->real=(-b+sqrt(d))/(2*a);
 x->imaginary=0;
 y->real=(-b-sqrt(d))/(2*a);
 y->imaginary=0;
 return 1;
 }
 if(d<0)
 {
 x->real=-b/(2*a);
 x->imaginary=sqrt(fabs(d))/(2*a);
 y->real=-b/(2*a);
 y->imaginary=sqrt(fabs(d))/(2*a);
 return 2;
 }
 return -1;
}
 int main()
 {
 float a,b,c;
 float real,imgaginary,disc;
 int d;
 struct complex r1,r2;
 d=findroots(1.0,2.0,3.0,&r1,&r2);
 if ( d<-1)
{
printf("a=0");
}
if(d=0)
{

printf("roots are real and equal");
}
if(d=1)
{
printf("roots are real and distinct");
}
if(d==2)
{
printf("roots are imaginary");
}

printf("%d\n",d);
}
