//find  lowest frequency characters in given string by help of dma and functions
#include<stdio.h>
#include<conio.h>
char * occurence(char * string)
{
	int i,j,count=0,check=0,k=0,n=0;
	char *min;
	min=(char *)malloc(sizeof(char));
	for(i=0;*(i+string)!=NULL;i++)
	{
		if(*(i+string)!=' ')
			check++;
	}
	n=check;
	for(i=0;*(string+i)!='\0';++i)
	{
		count=0;
		for(j=0;*(string+j)!='\0';j++)
		{
				if(*(i+string)==*(j+string))
				{
					if(j<i)
					{
						count=n;	
						break;
					}
					else if(*(i+string)==' ')
					{
						count=n;	
						break;
					}
					else
						count+=1;			
				}		
		}
		if(count==check)
		{
			*(k+min)=*(string+i);
			check=count;
			k++;
		}
	 	else if(count<check)
		{	
			while(k>0)
			{
				*(min+k)=NULL;
				k--;
			}
			*(k+min)=*(string+i);
			check=count;
			k++;
		}
	}
	return min;
}
void main()
{
	char *string,*min;
	int i;
	string=(char*)malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	min=occurence(string);
	printf("Lowest frequency characters list in entered string is :\n");
	for(i=0;*(i+min);i++)
	{
		printf("%c ",*(i+min));
	}
	free(string);
}
