#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=5;
	for(i=1;i<=9;i++)
	{	
		for(j=1;j<=9;j++)
		{	
			if(i!=1&&i!=9)
			{
				if(j<=k||j>9-k)
					printf("*");
				else
					printf(" ");
			}
			else
				printf("*");
		}
		i<5?k--:k++;
		printf("\n");
	}
}
