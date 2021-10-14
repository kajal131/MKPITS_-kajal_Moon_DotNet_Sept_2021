#include<stdio.h>
int main()
{

int sec,hr,min,s;

printf("enter the seconds ");

scanf("%d",&sec);

hr=sec/3600;
min=(sec-(hr*3600))/60;
s=(sec-(hr*3600)-(min*60));

printf("%dhr:%dmin:%ds",hr,min,s);

return 0;



}

