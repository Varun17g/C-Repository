//find all occurenece of given character in given string by help of dma and functions
#include<stdio.h>
#include<conio.h>
int * occurence(char find,char * string)
{
	int i,j=-1,*index,k=0;
	index=(int *)malloc(sizeof(int));
	for(i=0;*(string+i)!='\0';++i)
	{
		if(*(string+i)==find)
		{
			*(index+k)=i+1;
			k++;
		}		
	}		
	*(index+k)=NULL;
	return index;
}
void main()
{
	int *index,i;
	char *string;
	char enter;
	string=(char*)
	malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	printf("Enter char you want to find index of all occurence in entered string\n");
	scanf("%c",&enter);
	index=occurence(enter,string);
	for(i=0;*(i+index)!='\0';i++)
		printf("%d ",*(i+index));
}
