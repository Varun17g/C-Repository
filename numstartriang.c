#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0;
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
			k=k+i-1;
		else
			k=k+i;
		for(j=1;j<=9;j++)
		{
			if(j<=i+(i-1))
			{
				if(j%2==0)
					printf(" * ");
				else
				{
					printf("%d",k);
					if(i%2==0)
						k--;
					else
						k++;
				}
			}
		}
		printf("\n");
	}
	getch();
}
