//Remove duplicate occurence of all characters from given sentence by help of dma and functions
#include<stdio.h>
#include<conio.h>
void removes(char * string)
{
	int i,j,k;
	for(i=0;*(i+string)!=NULL;i++)
	{
		for(j=i+1;*(j+string)!=NULL;j++)
		{ 
			if(*(string+j)==*(string+i))
			{
				for(k=j;*(k+string)!=NULL;k++)
					*(string+k)=*(string+k+1);
			}
		}
	}
}
void main()
{
	char *string;
	string=(char*)malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	removes(string);
	puts(string);
	free(string);
}
