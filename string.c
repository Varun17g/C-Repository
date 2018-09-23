//frequency of words in a given sentence
#include<stdio.h>
#include<conio.h>
int length(char * string)
{
	int i;
	for(i=0;*(string+i)!=NULL;i++);
	return i;
}
int frequency(char *sub,char *string,int start)
{
	int i,j,count,freq=0,flag=0;
	count=length(sub);
	for(i=0;*(i+string)!=NULL;i++)
	{
		if(*(i+string)==*sub)
		{
				if(*(i-1+string)==' '||i==0)
				{
					flag=1;
					i++;
					for(j=1;j<count;j++,i++)
					{
						if(*(i+string)!=*(sub+j))
						{
							flag=0;
							break;
						}
					}
					if(*(i+string)==' '||*(i+string)==NULL)
						flag=1;
					else
						flag=0;
			}
			
		}
		if(flag==1)
		{
			if(i<start)
				break;
			freq+=1;
		}
		flag=0;
	}
	if(freq>0)
		printf("%s->",sub);
	return freq;
}
void main()
{
	int i,j,count,len;
	char *a,*orignal;
	a=(char*)malloc(sizeof(char));
	orignal=(char*)malloc(sizeof(char));
	printf("Enter string\n");
	gets(orignal);
	count=length(orignal);
	for(i=0;i<count;i++)
	{
		len=i;
		for(j=0;orignal[i]!=' ';j++,i++)
		{
			if(i==count)
			{
				a[j]=NULL;
				break;
			}
			else
				a[j]=orignal[i];
		}
		a[j]='\0';
		len=frequency(a,orignal,len);
		if(len>0)
			printf("%d\n",len);
	}
}
