// Use of printf statement to print value of diffrent data type
#include<stdio.h>
#include<conio.h>
int main();
{
int num=9;
float sal=9652.33;
char code='A' ;
longint pop=155054452312543;
double pi = 3.1415926536;
char msg[]="i have used all the data type";

clrscr();
printf("employe no. is:%d \n",num);
printf("salary is:%f\n",sal);
printf("your code is:%c\n",code);
printf("population of country is\n:%ld",pop);
printf("value of pi is:%e\n",pi);
printf("a lovelly message for you:%s\n",msg);
return 0;
}

