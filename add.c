// addition of 1st and 4th digit of 4 digit no
#include<stdio.h>
#include<math.h>
int main()
{
int x,y;
printf("enter your 4 digit number\n");
scanf("%d",&x);
y=(x%10)+((x-(x%10))/1000);
printf("your value ones digit is %d \n",y);
return 0;
}
