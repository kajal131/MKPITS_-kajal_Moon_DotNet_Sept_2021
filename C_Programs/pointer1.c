#include<stdio.h>
#include<stdlib.h>
int main()

{
int v=5, *ptr, u=10;

ptr=&v;
{

printf("\n address of v=%0x",ptr);
printf("\n %d",v);
printf("\n address of vp=%d",&v);
printf("\n content of v=%0x", *ptr);
}
return 0;


}

