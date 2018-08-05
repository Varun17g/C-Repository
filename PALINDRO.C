#include<stdio.h>
#include<conio.h>
void main()
{
	char enter[30];
	int i,count=0,calc,s=0,d=0;
	clrscr();
	printf("enter the string u want to check palindrom or not\n");
	gets(enter);
	for(i=0;enter[i]!='\0';i++)
	{
		count=count+1;
	}
	calc=count/2;
	for(i=0;i<calc;i++)
	{
		count=count-1;
		if(enter[i]==enter[count])
		{
			s=1;
		}
		else
		{
			d=1;
		}
	}
	if(s==1&&d==0)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
getch();
}