#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l;
	char k;
	for(i=3;i>=0;i--)
	{
		k='A';
		l=1;
		for(j=1;j<=8;j++)
		{
			if(j<=i||j>8-i)
				printf(" ");
			else if(j>4)
			{
				printf("%d",l);
				l++;
			}
			else
			{
				printf("%c",k);
				k++;
			}
		}
		printf("\n");
	}
}
