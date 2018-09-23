//find number occurenece of given character in given string by help of dma and functions
#include<stdio.h>
#include<conio.h>
int * occurence(char find,char * string)
{
	int i,count=0;
	for(i=0;*(string+i)!='\0';++i)
	{
		if(*(string+i)==find)
		{
			count++;
		}		
	}		
	return count;
}
void main()
{
	int i;
	char *string;
	char enter;
	string=(char*)
	malloc(sizeof(char));
	printf("Enter string\n");
	gets(string);
	printf("Enter char you want to find index of all occurence in entered string\n");
	scanf("%c",&enter);
	i=occurence(enter,string);
	printf("Total no of occurence is %d",i);
	return i;
}
