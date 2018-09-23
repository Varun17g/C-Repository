//find first occurenece of given character in given string by help of dma and functions
#include<stdio.h>
#include<conio.h>
int occurence(char find,char * string)
{
	int i;
	for(i=0;*(string+i)!='\0';++i)
	{
		if(*(string+i)==find)
		{
			return i+1;
		}		
	}	
	return -1;
}
void main()
{
	int index;
	char *string;
	char enter;
	string=(char*)
	malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	printf("Enter char you want to find index of first occurence in entered string\n");
	scanf("%c",&enter);
	index=occurence(enter,string);
	printf("Index of first occurence of %c is %d",enter,index);
}
