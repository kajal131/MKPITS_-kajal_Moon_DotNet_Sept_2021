#include<stdio.h>
float Areaofcircle(int,float); /* declaration*/
int Arearect(int, int);
int Areaoftraiagle( int, int);
int main()

{ 

int radius; 
float A ,pie=3.14;
printf("enter the rdious");
scanf("%d", &radius);

A=Areaofcircle(radius,pie);

printf("\n area of circle=%6.2f and radius=%d",A,radius);
printf("\n area of rectangle= %d", Arearect(12,6));
printf("\n area of triangle= %d", Areaoftraiagle(12,6));
return 0;

}
/* user defind function: step 2is*/
float Areaofcircle(int r,float p)

{

return  p*r*r;

}
int Arearect(int l, int b)
{

return l*b;
}

int Areaoftraiagle( int base, int ht)

{
return 0.5*base*ht;

}

