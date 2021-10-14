#include<stdio.h>
#include<conio.h>

int main()
{
int i=1, r; 
float area;

 while (i<=5)

{
printf("\n enter the radious");
scanf("%d",&r);

area=3.14*r*r;
printf("\n area od circle=%3.4f",area);
i++;


}


return 0;

}



