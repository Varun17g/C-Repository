#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char k;
	for(i=3;i>=0;i--)
	{
		k='A';
		for(j=1;j<=7;j++)
		{
			if(j<=i||j>7-i)
				printf(" ");
			else
			{
				printf("%c",k);
				j<4?k++:k--;
			}
		}
		printf("\n");
	}
}
