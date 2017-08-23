/* c program to print first hundred numbers*/
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter a number :\n");
	scanf("%d",&n);
	printf("the series of numbers are :\n");
	for(i=1;i<(n+1);i++)
	{
		printf("%d\n",i);
	}
}
