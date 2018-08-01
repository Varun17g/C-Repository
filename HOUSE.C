#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n");
	for(i=0;i<10;i++)
	{
		printf("				");
		for(j=0;j<15;j++)
		{
			if(i==0)
			{
				if(j==1||j==0||j==2)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			if(i==1)
			{
				if(j==2||j==4||j==14)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if(i==2)
			{
				if(j==1||j==5||j==14)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if(i==3)
			{
				if(j==0||j==14||j==6)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if(i==4||i==9)
			{
				printf("*");
			}
			if(i==5||i==6)
			{
				if(j==0||j==6||j==14||j==8||j==10||j==12)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			if(i==7||i==8)
			{
				if(j==2||j==3)
				{
					printf("*");
				}
				if(j==0||j==4||j==12)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
		}
getch();
}