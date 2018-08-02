#include<stdio.h>
#include<conio.h>
void next(int c)
{
	void main();
	void output(float d);
	int i,a;
	float b;
	printf("enter the new number\n");
	scanf("%f",&b);
	printf("enter the function again\n 1 for add,\n 2 for subtract,\n 3 for multiply,\n 4 for divide \n");
	scanf("%d",&i);
	if(i==1)
	{
	     c=c+b;
	     output(c);
	     printf(" [ if u want to continue please enter 1 ] and\n [ enter 0 to continue with new numbers ]and\n [enter 3 for exit]\n");
	     scanf("%d",&a);
	     if(a==0)
		{
			main();
		}
	     if(a==1)
	     {
		next(c);
	     }
	     if(a==3)
	     {
		exit(0);
	     }

	}
	if(i==2)
	{
		c=c-b;
		output(c);
		printf(" [ if u want to continue please enter 1 ] and\n [ enter 0 to continue with new numbers ]and\n [enter 2 for exit]\n");
		scanf("%d",&a);
		if(a==0)
		{
			main();
		}
		if(a==1)
		{
			next(c);
		}
		if(a==2)
		{
			exit(0);
		}
	}
	if(i==3)
	{
		c=c*b;
		output(c);
		printf(" [ if u want to continue please enter 1] and\n [ enter 0 to continue with new numbers ]and\n [enter 2 for exit]\n");
		scanf("%d",&a);
		if(a==0)
		{
			main();
		}
		if(a==1)
		{
			next(c);
		}
		if(a==2)
		{
			exit(0);
		}
	}
	if(i==4)
	{
		c=c/b;
		output(c);
		printf(" [ if u want to continue please enter 1 ] and\n [ enter 0 to continue with new numbers ]and [enter 2 for exit]and\n [enter 2 for exit]\n");
		scanf("%d",&a);
		if(a==0)
		{
			main();
		}
		if(a==1)
		{
			next(c);
		}
		if(a==2)
		{
			exit(0);
		}
	}
	/*if(i==5)
	{
		c=c%b;
		output(c);
		printf(" [ if u want to continue please enter 1 ] and\n [ enter 0 to continue with new numbers ]and\n [ enter 2 for exit ]\n");
		scanf("%d",&a);
		if(a==0)
		{
			main();
		}
		if(a==1)
		{
			next(c);
		}
		if(a==2)
		{
			exit(0);
		}
	}*/

}
void output(float d)
{
	printf("result is %f\n",d);
}
void main()
{
	int i,d,e;
	float a,b,c;
	clrscr();
	printf("enter two values\n");
	scanf("%f%f",&a,&b);
	printf("enter the function\n 1 for add,\n 2 for subtract,\n 3 for multiply,\n 4 for divide\n");
	scanf("%d",&d);
	for(i=0;i<1;i++)
	{
		if(d==1)
		{
			c=a+b;
			output(c);
			printf(" [ enter 0 for clear the calculation &  continue ],\n [ 1 for continue with output ]and\n [ 2 for exit ]\n");
			scanf("%d",&e);
			if(e==0)
			{
				main();
			}
			if(e==1)
			{
				next(c);

			}
			if(e==2)
			{
				break;
			}
		}
		if(d==2)
		{
			c=a-b;
			output(c);
			printf(" [ enter 0 for clear the calculation &  continue ],\n [ 1 for continue with output ]and\n [ 2 for exit ]\n");
			scanf("%d",&e);
			if(e==0)
			{
				main();
			}
			if(e==1)
			{
				next(c);

			}
			if(e==2)
			{
				break;
			}
		}
		if(d==3)
		{
			c=a*b;
			output(c);
			printf(" [ enter 0 for clear the calculation &  continue ],\n [ 1 for continue with output ]and\n [ 2 for exit ]\n");
			scanf("%d",&e);
			if(e==0)
			{
				main();
			}
			if(e==1)
			{
				next(c);

			}
			if(e==2)
			{
				break;
			}
		}
		if(d==4)
		{
			c=a/b;
			output(c);
			printf(" [ enter 0 for clear the calculation &  continue ],\n [ 1 for continue with output ]and\n [ 2 for exit ]\n");
			scanf("%d",&e);
			if(e==0)
			{
				main();
			}
			if(e==1)
			{
				next(c);

			}
			if(e==2)
			{
				break;
			}
		}
		/*if(d==5)
		{
			c=a%b;
			output(c);
			printf(" [ enter 0 for clear the calculation &  continue ],\n [ 1 for continue with output ]and\n [ 2 for exit ]\n");
			scanf("%d",&e);
			if(e==0)
			{
				main();
			}
			if(e==1)
			{
				next(c);

			}
			if(e==2)
			{
				break;
			}
		}*/

	}

}