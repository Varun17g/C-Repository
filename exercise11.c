//find  frequency of characters in given string by help of dma and functions
#include<stdio.h>
#include<conio.h>
void occurence(char * string)
{
	int i,j,count;
	printf("Frequency of all characters\n");
	for(i=0;*(string+i)!='\0';++i)
	{
		count=0;
		for(j=0;*(string+j)!='\0';j++)
		{
				if(*(i+string)==*(j+string))
				{
					if(j<i||*(i+string)==' ')
						break;
					else
						count+=1;	
				}		
		}
		if(count>0)
		{
			printf("%c->%d\n",*(i+string),count);
		}
	}	
}
void main()
{
	char *string;
	string=(char*)malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	occurence(string);
	free(string);
}
