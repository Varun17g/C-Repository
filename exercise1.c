//find number of characters in string using dma
#include<stdio.h>
#include<conio.h>
int count(char *string)
{
	int i,count;
	for(i=0;*(i+string)!=NULL;++i)
	{
		count++;
	}
	return count;
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
	i=count(ptr);
	printf("Length of string is %d\n",i);
	free(ptr);
}
