#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	if(n>0 && n&1)
	{
		int counter=1;
		for(int i=0;i<n;i++)
		{
			int j=i;
			for(j=i;j<n-1;j++)
			{
				printf(" ");
			}
			for(int k=0;k<counter;k++)
			{
				printf("*");
			}
			printf("\n");
			counter+=2;
		}	
		counter-=4;
		for(int i=n-2;i>=0;i--)
		{
			for(int j=i;j<n-1;j++)
				printf(" ");
			for(int k=0;k<counter;k++)
			{
				printf("*");
			}
			printf("\n");
			counter-=2;
		}
		
	}
	else
		printf("Masukan tidak valid");

	return 0;
}
