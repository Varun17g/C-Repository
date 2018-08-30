#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char a;
	for(i=0;i<4;i++)
	{
		a='A';
		for(j=i;j>0;j--)
			a++;
		for(j=0;j<=3;j++)
		{
			if(j<=i)
			{
				printf("%c",a);
				a--;
			}
		}
		printf("\n");
	}
	return 0;
}
