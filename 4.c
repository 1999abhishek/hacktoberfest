// Use of printf and scanf statement to print value of diffrent data type
#include<stdio.h>

int main()
{
int num;
float sal;
char code;
long int pop;
double pi;
char msg[100];

printf("Enter your  employe number\n");
scanf("%d",&num);
printf("Enter your salary\n");
scanf("%f",&sal);
printf("enter your code\n");
scanf("%c",&code);
printf("Enter the population of India\n");
scanf("%ld",&pop);
printf("Enter the value of pi\n");
scanf("%lf",&pi);
printf("Enter your message\n");
scanf("%s",msg);

printf("employe no. is:%d \n",num);
printf("salary is:%f\n",sal);
printf("your code is:%c\n",code);
printf("population of country is:%ld\n",pop);
printf("value of pi is:%lf\n",pi);
printf("a lovelly message for you:%s\n",msg);
return 0;
}
