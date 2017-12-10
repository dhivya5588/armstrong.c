#include<stdio.h>
#include<conio.h>
void main()
{
int n,c,a=0,rem;
scanf("%d",&n);
c=n;
whie(n!=0)
{
rem=n%10;
a=a+rem*rem*rem;
n=n/10;
}
printf("%d",a);
if(a==c)
{
printf("armstrong number");
}
else
{
printf("not an armstrong number");
}
getch();
}
