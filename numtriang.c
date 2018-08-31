#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	for(i=3;i>=0;i--)
	{
		for(j=1;j<=7;j++)
		{
				if(j<=i||j>7-i)
					printf(" ");
				else
				{
					printf("%d",k);
					j<4?k--:k++;
				}
		}
		printf("\n");
	}
	getch();
}
