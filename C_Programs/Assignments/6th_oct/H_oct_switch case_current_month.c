#include<stdio.h>
int main()
{
 int month;
 printf("enter the current month number\n");
 scanf("%d",&month);
 switch(month)
 {
 case 1:
        printf("\n It's Jan");
		break;
 case 2:
        printf("\n It's Feb");
		break;	  	  
 case 3:
        printf("\n It's march");
		break;	  	  
 case 4:
        printf("\n It's April");
		break;
 case 5:
        printf("\n It's May");
		break;	  	  
 case 6:
        printf("\n It's June");
		break;
 case 7:
        printf("\n It's July");
		break;
 case 8:
        printf("\n It's Aug");
		break;
 case 9:
        printf("\n It's Sept");
		break;
 case 10:
        printf("\n It's Oct");
		break;
 case 11:
        printf("\n It's Nov");
		break;
 case 12:
        printf("\n It's Dec");
		break;
		
 default:
 	 	 printf("\n Your Selection Is Invalid ");	                                	               
		
 }
 return 0;
 
 } 

