#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l=2;
	char k='A';
	for(i=4;i>=0;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(j>i)
			{
				printf("%c",k);
				if(j!=5)
					k--;
				else
					k=k+l;
			}
			else
				printf(" ");
		}
		l+=2;
		printf("\n");
	}
	getch();
}
