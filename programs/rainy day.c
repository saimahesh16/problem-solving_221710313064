#include<stdio.h> 
#include<math.h> 
void main()
{
 float m,t,r;
 double a,b; 
 int c;
 scanf("%f%f%f",&t,&m,&r); 
 b=1200+r*(m-1);
 a=t*m*1200/b;
 c=(int)a;
 printf("the amount to be deposited is :%d\n",c);
}

