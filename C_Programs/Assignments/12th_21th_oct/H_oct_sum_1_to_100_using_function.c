#include<stdio.h>
int Add();
int main()

{ 
  int A;
  A= Add();
  printf("Addition of 1 to 100 is =%d",A);
  
  return 0;
}

	int Add()
	{
	int sum=0,i;
	for(i=0; i<=100; i++)
	{ 
		sum+=i;
		
	}
	 return sum;
	 
}

