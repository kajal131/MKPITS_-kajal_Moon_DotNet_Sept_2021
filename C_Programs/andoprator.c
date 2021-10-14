#include<stdio.h>
int main()
{
int a,b,c;

printf("enter 3 number");
scanf("\n%d %d %d",&a, &b, &c);

if ((a>b) && (a>c))

printf("a=%d is gretest",a);

else
if(b>c)

printf("b=%d is gretest",b);

else
 
printf("c=%d is gretest",c);
}

