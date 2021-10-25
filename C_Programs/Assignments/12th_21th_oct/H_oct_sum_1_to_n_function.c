#include<stdio.h>
int Add();
int main()

{
 int A,n;
 A=Add();
 
 {
  printf("\n Addition=%d",A);
  
 }
 
 return 0;



}

	int Add()
	{ 
	 int sum=0,n,i;
	 printf("enter the value of n");
     scanf("%d",&n);
	 
	 for(i=1; i<=n; i++)
	 {
	 
	 sum+=i;
	 
	 }
	 
	 return sum;
	
}

