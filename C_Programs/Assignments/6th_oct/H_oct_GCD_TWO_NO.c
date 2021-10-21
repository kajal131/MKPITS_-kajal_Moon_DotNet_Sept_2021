#include<stdio.h>
int main()
{

int i, n1, n2, gcd;

Input:printf("enter the two number to find gcd");

scanf("%d %d",&n1, &n2);

for(i=1;i <=n1 && i<=n2; ++i)

{
if(n1%i==0 && n2%i==0)
gcd=i;
}

printf("gcd od n1=%d and n2=%d is %d",n1,n2,gcd);

goto Input;

return 0;
}

