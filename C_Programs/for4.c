#include<stdio.h>
#include<conio.h>

int main()
{

int i,r,n;
float area;
printf("how many time you want to calculate the are of circle");
scanf("%d",&n);

for(i=1;i<=n;i++)

{
printf("enter the radious of circle");
scanf("%d",&r);
printf("area=%3.4f",3.14*r*r);
}




return 0;

}



