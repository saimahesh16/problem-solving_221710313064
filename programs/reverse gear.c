#include <stdio.h>
int main() {
int f,b,d, t, distance, displacement, step, rd, td, tot, tt, test;
scanf("%d",&test);
while(test)
{
scanf("%d %d %d %d",&f,&b,&t,&d);
distance=b+f;
displacement=b-f;
step=(d-b)/displacement;
if((d-b)%displacement!=0)
step=step+1; 
rd=d-(step*displacement);
tot=(step*distance)+rd;
tt=tot*t;
printf("%d\n", tt);
test--;
}
return 0;
}
