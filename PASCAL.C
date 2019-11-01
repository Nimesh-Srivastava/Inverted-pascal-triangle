#include<stdio.h>
#include<conio.h>

long long fact(int n)			//function to calculate factorial
{
	int i;
	long long f;
	f=n;
	if(n==0 || n==1)
	{
		return 1;
	}
	for(i=n;i>1;i--)
	{
		f*=(i-1);
	}
	return f;
}

void main()
{
	int line,i,j,k,coeff;
	clrscr();
	printf("\nEnter the number of lines : ");
	scanf("%d",&line);				//total number of lines
	printf("\n");
	for(i=line-1;i>=0;i--)
	{
		for(k=0;k<line-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			coeff=fact(i)/(fact(j)*fact(i-j));	//calculate the number to be printed
			printf("%d ",coeff);			//print the value
		}
		printf("\n");
	}
	getch();
}