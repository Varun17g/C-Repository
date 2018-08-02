#include<stdio.h>
#include<conio.h>
void main()
{
	char a[40];
	int b[40];
	int i,j;
	printf("enter the sentence\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0'+1;j++)
		{
			if(a[i]==b[j])
				b[j]=b[j]+1;
			else if(i==j)
				b[j]=1;
		}
	}
	for(j=0;b[j]!='\0';j--)
	{
		printf("%d",b[j]);
	}
}