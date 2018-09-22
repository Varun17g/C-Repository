//Reverse of entered string using dma
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
void reverse(char *string)
{
	int i,j,k;
	char *p;
	i=count(string);
	i--;
	p=(char*)malloc(i*sizeof(char));
	for(k=0;i>=0;++k,--i)
	{
		*(p+k)=*(string+i);
	}
	*(p+k)=NULL;
	strcpy(string,p);
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
	reverse(ptr);
	printf("Reverse of string is ->");
	puts(ptr);
	free(ptr);
}
