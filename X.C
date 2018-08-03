#include<stdio.h>
#include<conio.h>
void next()
{
	printf("*");
}
void main()
{
	int i,j,l,m;
	clrscr();
	for(i=0;i<=8;i=i+2)
	{
		if(i>=2&&i<3)
		{
			for(j=0;j<i;j=j+2)
			{
				printf(" ");
			}
		}
		if(i==6)
		{
			printf(" ");
		}
		if(i!=4)
		{
			next();
		}
		if(i==4)
		{
			printf("  *");
		}
		if(i<4)
		{
		for(m=3;m>i;m--)
			{
				printf(" ");
			}
		}
		if(i>=6)
		{
			if(i==6)
			{
				for(l=4;l<i;l=l+2)
				{
					printf(" ");
				}
			}
			if(i==8)
			{
				printf("   ");
			}
		}
		if(i!=4)
		{
			next();
		}
		printf("\n");
	}
getch();
}