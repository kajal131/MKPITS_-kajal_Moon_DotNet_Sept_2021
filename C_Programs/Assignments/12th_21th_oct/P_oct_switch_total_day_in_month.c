#include<stdio.h>
int cube(int);
float sphare(int);
float cone(int int);
float cylinder(int int);
int main()
{
 int r,a, volume_cube,V, num;
 float pi=3.14, volume_sphare;
 printf("enter the number of your choice");
 scanf("%d",num);
 switch(num)
 {
 
case 1: ptintf("Enter value of a");
 		scanf("%d",a);
 		V=cube(a);
		printf("volume of a cube for side = %d is %d",a,V);
        break;
case 2: ptintf("Enter value of r");
 		scanf("%d",r);
 		V=sphare(r);
		printf("volume of a sphare for side = %d is %d",r,V);
        break;
		
default : printf("invalid input");
return 0;

int cube(int a)
{

 
 return (a*a*a);

}

/*float sphare(int r)
{

return (3/4(pi*r*r));

}

}*/

