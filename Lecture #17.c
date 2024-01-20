#include<stdio.h>
//Write a function int max_of_four(int a,int b,int c,int d)
//Which reads four arguments and returns the greatest of them.
//int max_of_four(int a,int b,int c,int d)
//{
//	int max;
//	if(a>b)
//	{
//		max=a>c?a>d?a:d:c>d?c:d;
//	}
//	else
//	{
//		max= b>c?b>d?b:d:c>d?c:d;
//	}
//	return max;
//}
//main()
//{
//	int a,b,c,d;
//	printf("Enter four number : ");
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	int ans = max_of_four(a,b,c,d);
//	printf("%d",ans);
//	
//	return 0;
//}

//Print a pattern of numbers from 1 to n as shown below.
//Each of the numbers is separated by a single space.
//4 4 4 4 4 4 4
//4 3 3 3 3 3 4
//4 3 2 2 2 3 4
//4 3 2 1 2 3 4
//4 3 2 2 2 3 4
//4 3 3 3 3 3 4
//4 4 4 4 4 4 4

int main()
{
	int i,j,k,r,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1,r=0;i<=2*n-1;i++)
	{
		i<n?r++:r--;
		k=n;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=r && j<=2*n-r)
			{
				printf("%d",k);
			}
			else
			{
				if(j<n)
				{
					printf("%d",k);
				}
				else
				{
					
				}
			}
			
		}
		printf("\n");
	}
	return 0;
}
