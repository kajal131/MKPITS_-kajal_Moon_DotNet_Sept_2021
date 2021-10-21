#include<stdio.h>
int main()
{

int grams, kilograms;

printf("enter the weight in grams\b=");
scanf("%d",&grams);

kilograms=grams/1000;
grams=grams%1000;

printf(" grams = %d kg %d gm",kilograms, grams);

return 0;



}

