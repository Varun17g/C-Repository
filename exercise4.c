//Reverse of entered string word by word using dma
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
	int i,j=0,first=0,k,l;
	char *p;
	i=count(string);
	p=(char*)malloc(i*sizeof(char));
	for(k=0;k<i;++k)
	{
		if(*(string+k)==' ')
		{
			l=k-1;
			while(l>=first)
			{
				*(p+j)=*(string+l);
				l--;
				j++;
			}
			*(p+j)=' ';
			k+=1;
			j=first=k;		
		}
		if(k==(i-1))
		{
			l=k;
			while(l>=first)
			{
				*(p+j)=*(string+l);
				l--;
				j++;
			}
			*(p+j)='\0';
			k+=1;
		}
	}
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
