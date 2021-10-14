#include<stdio.h>
#include<conio.h>

int main()
{
int i=1, r,n; 
float area;

printf("enter the number how many time you want to calculate the area of circle");
scanf("\n%d",&n);

 while (i<=n)

{
printf("\n enter the radious ");
scanf("%d",&r);

area=3.14*r*r;
printf("\n area od circle=%3.4f",area);
i++;


}


return 0;

}



