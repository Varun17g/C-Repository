#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,l=10,k=0;
	for(i=1;i<=21;i++)
	{
		for(j=0;j<21;j++)
		{
			if(j<l||j>20-l)
			{
				printf("  ");
			}
			else
			{
				printf("%d ",k);
				if(j<10)
				{
					if(k==9)
						k=0;
					else
						k++;
				}
				else
				{ 
					if(k==0)
						k=9;
					else
						k--;
				}
			}
		}
		if(k<8)
			k+=2;
		else if(i!=1&&i!=11)
			k=0;
		else if(i==1)
			k=1;
		else
			k=9;
		if(i>11&&k==0)
			k=8;
		else if(i>12&&k!=0)
			k-=2;	
		i<11?l--:l++;
		printf("\n");
	}
	return 0;
}
