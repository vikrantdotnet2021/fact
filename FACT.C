#include<stdio.h>
#include<conio.h>
void main()
{
int i,fact=1, num;
printf("enter a number");
scanf("%d", &num);
i=1;
while(i<=num)
{
fact=fact*i;
i++;
}
printf("%d",fact);
getch();
}