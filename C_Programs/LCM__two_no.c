#include<stdio.h>
int main()

{
int i, n1,n2;
int lcm;
 printf("enter the two number to find lcm");
 scanf("%d %d",&n1,&n2);
 lcm=(n1>n2)?n1:n2;
 
 while(1)
 {
 
 if(lcm%n1==0 && lcm%n2==0)
 {
 printf("the lcm of %d and %d is %d",n1, n2,lcm);
 
 break;
 
 }

+++lcm;
}
return 0;

}

