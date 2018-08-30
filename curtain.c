#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=3;i>=0;i--)
	{
		for(j=1;j<=8;j++)
		{
			if(j<=i||j>i*2+(5-i))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}
