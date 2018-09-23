//find  highest frequency character in given string by help of dma and functions
#include<stdio.h>
#include<conio.h>
char * occurence(char * string)
{
	int i,j,count,check=0,k=0;
	char *max;
	max=(char *)malloc(sizeof(char));
	for(i=0;*(string+i)!='\0';++i)
	{
		count=0;
		for(j=0;*(string+j)!='\0';j++)
		{
				if(*(i+string)==*(j+string))
				{
					if(j<i)
						break;
					else
						count+=1;	
				}		
		}
		if(count==check)
		{
			
			*(k+max)=*(string+i);
			check=count;
			k++;
		}
		else if(count>check)
		{
			while(k>0)
			{
				*(max+k)=NULL;
				k--;
			}
			*(k+max)=*(string+i);
			check=count;
			k++;
		}
	}		
	return max;
}
void main()
{
	char *string,*max;
	int i;
	string=(char*)malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	max=occurence(string);
	printf("max frequency characters list in entered string is :\n");
	for(i=0;*(i+max);i++)
	{
		printf("%c ",*(i+max));
	}
	free(string);
}
