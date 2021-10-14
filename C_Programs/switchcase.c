#include<stdio.h>
#include<conio.h>

int main()

{
int number,sum=0;
printf("\n enter a number and press 0 to stop");
input:scanf("%d", &number);
if(number==0)
goto end;
else{

sum+=number;
goto input;

end:printf("sum=%d",sum);
}
return 0;

}



