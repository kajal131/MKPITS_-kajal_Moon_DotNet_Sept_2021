#include<stdio.h>

int main

{

int i,A[10];

printf("enter 10 elements of array using pointer notation");
for(i=0;i<10;i++)
{
scanf("%d",(A+1));
}

printf("\n given array is");

for (i=0;i<=10;i++)

{

printf("%d",*(A+1));
}
return 0;


}

