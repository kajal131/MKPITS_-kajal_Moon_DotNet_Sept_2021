#include<stdio.h>
#include<stdlib.h>
int main()
{

int v=5, *ptr, u=10;
char *pointer1, color='r';
pointer1=&color;
ptr=&v;

printf("\n content of ptr=%0x",&v);
printf("\n content of v =%d",*ptr);/* derefencing operator*/
ptr++;
printf("\n current address stored in ptr is=%0x",ptr);
printf("\n  address color is=%0x",*pointer1);
pointer1++;
printf("\n  address stored in pointer is=%0x",pointer1);

return 0;

}

