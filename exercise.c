//find number of vowels and consonant in string using dma
#include<stdio.h>
#include<conio.h>
int vowels(char *p)
{
	int i,vow=0;
	char check;
	for(i=0;*(p+i)!=NULL;++i)
	{
		check=*(i+p);
		switch(check)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vow+=1;
		}
	}
	return vow;
}
int consonants(char *p)
{
	int i,cons=0;
	char check;
	for(i=0;*(p+i)!=NULL;++i)
	{
		check=*(i+p);
		switch(check)
		{
			case 'a':
				break;
			case 'e':
				break;
			case 'i':
				break;
			case 'o':
				break;
			case 'u':
				break;
			case 'A':
				break;
			case 'E':
				break;
			case 'I':
				break;
			case 'O':
				break;
			case 'U':
				break;
			case ' ':
				break;
			default:
				cons+=1;
		}
	}
	return cons;
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
	i=vowels(ptr);
	printf("vowels in string is %d\n",i);
	i=consonants(ptr);
	printf("consonants in string is %d",i);
	free(ptr);
}
