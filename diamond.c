#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	printf("Enter odd value for length of diamond you want to print\n");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		if(i<=(j/2))
		{
			printf(" ");
			for(k=i;k<=j/2;k++)
				printf(" ");
			for(k=i;k>0;k--)
				printf("* ");
		}else if(i>(j/2))
		{
			for(k=i;k>j/2;k--)
				printf(" ");
				for(k=i;k<=j;k++)
					printf("* ");
		}
		printf("\n");
	}
}
