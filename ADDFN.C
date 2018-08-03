#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int a,b,result,d;
	clrscr();
	printf("enter two values for add\n");
	scanf("%d%d",&a,&b);
	result=add(a,b);
	d=result*a;
	printf("%d value of d %d",result,d);
	getch();
}