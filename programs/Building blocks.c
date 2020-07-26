#include<stdio.h>
int m[10][10];
void del(int i, int j, int s, int f,int r, int c)
{
int k,l;
if(s==0)
{
for (k=0;k<r;k++)
for (l=j;l<c;l++)
m[k][1]=-1;
}
else
{
for(k=i;k<r;k++)
for(l=0;l<c;l++)
m[k][l]=f-1;
}
}
int rsum(int i,int j,int r,int c)
{
int k,l,s=0;
for (k=0;k<i;k++)
for (l=0;l<c;l++)
s+=m[k][1];
return s;
}
int csum(int i, int j, int r,int c)
{
int k,l,s=0;
for (k=0;k<r;k++)
for(l=0;l<j;l++)
s+=m[k][l];
return s;
}
int main()
{
int i,j,k,r,c, max=0,r1,c1,s, t1,t2, sum=0;
char ch;
scanf("%d%c%d",&r,&ch,&c);
r1=r;
c1=c;
for(i=0; i<r;i++)
for(j=0; j<c;j++)
{
scanf ("%d", &m[i][j]);
if(j<c-1)
scanf("%c",&ch);
if(m[i][j] > max)
max=m[i][j];
}
for (k=1;k<=max;k++)
{
for(i=0;i<r1; i++)
for(j=0; j<c1; j++)
{
if(m[i][j] < k)
{
t1=rsum(i,j,r1,c1);
t2=csum(i, j,r1,c1);
s=(t1 > t2) ? 1: 0;
del(i,j,s,k,r1,c1);

if(s==1)
r1=i;
else
c1=j;
}
}
}
for(i=0;i<r;i++)
{
for (j=0;j<c;j++) 
sum+=m[i][j];
}
printf("%d", sum); 
return 0;
}
