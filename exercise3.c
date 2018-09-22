//string is palindrom or not using dma
#include<stdio.h>
#include<conio.h>
int count(char *string)
{
	int i,count=0;
	for(i=0;*(i+string)!=NULL;++i)
	{
		count++;
	}
	return count;
}
void palindrome(char *string)
{
	int i,j,k;
	char *p;
	i=count(string);
	if(i%2==0)
	{
		for(i=i/2,j=(i/2)+1;i>=0;i--,j++)
		{
			if(*(string+i)!=*(string+j))
			{
				printf("String is not palindrome");
				exit(0);
			}
		}
	}
	else
	{
		for(i=i/2,j=(i/2)+2;i>=0;i--,j++)
		{
			if(*(string+i)!=*(string+j))
			{
				printf("String is not palindrome");
				exit(0);
			}
		}
	}
	printf("String is palindrome");
}
void main()
{
	char *ptr;
	int i;
	ptr=(char*)malloc(sizeof(char));
	if(ptr==NULL)
	{
		printf("memory not allocated");
		exit(0);
	}
	printf("enter string\n");
	gets(ptr);
	palindrome(ptr);
	free(ptr);
}
