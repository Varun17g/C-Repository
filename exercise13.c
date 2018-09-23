//Remove last occurence of character from given sentence by help of dma and functions
#include<stdio.h>
#include<conio.h>
int length(char * string)
{
	int i;
	for(i=0;*(i+string)!=NULL;i++);
	return i;
}
void removes(char * string,char character)
{
	int i,j,count;
	count=length(string)-1;
	for(i=count;i>=0;i--)
	{
		if(*(i+string)==character)
		{
			for(j=i;*(j+string)!=NULL;j++)
			{
				*(string+j)=*(string+j+1);
			}
			return;
		}
	}
	printf("Character not exist in Sentence\n");
}
void main()
{
	char *string,character;
	string=(char*)malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	printf("Enter character to remove first occurence of it\n");
	scanf("%c",&character);
	removes(string,character);
	puts(string);
	free(string);
}
