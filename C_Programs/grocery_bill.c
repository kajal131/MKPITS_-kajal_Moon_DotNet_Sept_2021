#include<stdio.h>
int main()
{
int i,j,n qty;
float price, amt,bill=0.0;
 printf("how manu otems you want to purches");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\n enter price\n");
 scanf("%f"&price);
 printf("enter quantity");
 scanf("%d",&qyt);
 
 amt=price*qty;
 }
 
 printf("items	price	qty  amt	
 
 for(i=0;i<3;i++)
 {
 j=i+1;
 
 printf("%5d %3f %d %4.3f", j, price,qty, amt);
 
 bill+=amt;
 }
 printf("\n total bill rs./%4.2f",bill);
 
 return 0;
 
 }

