// A program which prints triangle and square according to your need
#include<stdio.h>
int main()
{
	int ch,i,j;
	printf("Enter Choice\n");
	printf("1 for Triangle and 2 for Square: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				for(i=0;i<5;i++)
				{
					for(j=0;j<=i;j++)
						printf("*");
					printf("\n");
				}
				break;
            }
		case 2:
			{
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
						printf("*");
					printf("\n");
				}
				break;
            }
		default:
			printf("Invalid Choice");
	}
	return 0;
}
