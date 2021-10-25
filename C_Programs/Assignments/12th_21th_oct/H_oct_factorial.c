/*find a factorial of n number*/
#include<stdio.h>
int main()
{
 
    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ",facto());
    return 0;
}
int facto()
{
    int i,facto=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        facto=facto*i;
    }
    return facto;
}

