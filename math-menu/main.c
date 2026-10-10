#include<stdio.h>
#include<math.h>
int main()
{
	int ch;
	printf("Enter Choice\n");
	printf("1 for Pallindrome\n2 for Fibonacci Sequence\n3 for Perfect Square Sequence\n4 for Perfect Cube Sequence\n5 for Armstrong\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				printf("Pallindrome\n");
                int n,n2,t,r,i,num,rev=0,c=0;
                printf("Enter a number: ");
                scanf("%d",&n);
                t=n;
                num=n;
                n2=n;
                do
                    {
                        c++;
                        n/=10;
                    }
                while(n!=0);
                for(i=c-1;i>=0;i--)
                    {
                        r=num%10;
                        rev+=(r*(int)(round(pow(10,i))));
                        num/=10;
                    }
                if(rev==n2)
                    printf("Pallindrome Number");
                else
                    printf("Not a Pallindrom Number");
                break;
            }
		case 2:
			{
				printf("Fibonacci");
                int i,t1=0,t2=1,s=0,n;
                printf("Enter upper limit: ");
                scanf("%d",&n);
                for(i=0;i<=n;i++)
                    {
                        printf("%d, ", t1);
                        s = t1 + t2; 
                        t1 = t2;
                        t2 = s; 
                    }
                break;
            }
		case 3:
			{
				printf("Perfect Square Sequence\n");
                int i,n,sq;
                printf("Enter upper limit: ");
                scanf("%d",&n);
				printf("Number - Perfect Square\n");
                for(i=0;i<=n;i++)
                    {
                        sq = pow(i,2);
						printf("%d      -      %d\n",i,sq);
                    }
                break;
            }
		case 4:
			{
				printf("Perfect Cube Sequence\n");
                int i,n,cb;
                printf("Enter upper limit: ");
                scanf("%d",&n);
				printf("Number - Cube\n");
                for(i=0;i<=n;i++)
                    {
                        cb = pow(i,3);
						printf("%d      -    %d\n",i,cb);
                    }
                break;
            }
		case 5:
			{
				printf("Armstrong\n");
                int n,n2,t,r,i,num,a=0,c=0;
                printf("Enter a number: ");
                scanf("%d",&n);
                num=n;
                n2=n;
                do
                    {
                        c++;
                        n/=10;
                    }
                while(n!=0);
                for(i=1;i<=c;i++)
                    {
                        r=num%10;
                        a+=((int)round(pow(r,c)));
                        num/=10;
                    }
                if(a==n2)
                    printf("Armstrong Number");
                else
                    printf("Not a Armstrong Number");
                break;
            }
		default:
			printf("Invalid Choice");
	}
	return 0;
}
