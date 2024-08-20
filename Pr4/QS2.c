#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,c=11;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++ )
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}