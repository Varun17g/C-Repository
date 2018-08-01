#include<stdio.h>
#include<conio.h>
void pyramid()
{
	printf("**");
}
void main()
{
	int i,j,size,k;
	clrscr();
	printf("enter size of pyramid = ");
	scanf("%d",&size);
	printf("                                         ");
	printf("*\n");
	for(i=0;i<size-1;i++)
	{
		printf("                                  ");
		for(k=6;k>i;k--)
			printf(" ");
		printf("*");
		for(j=0;j<=i;j++)
		{
			pyramid();
		}
		printf("\n");
	}
	for(k=0;k<3;k++)
	{
		printf("                                        *");
		for(j=0;j<(size%2)-2;j++);
			pyramid();
		printf("\n");
	}
getch();
}