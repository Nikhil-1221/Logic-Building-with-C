#include<stdio.h>
//Write a function int max_of_four(int a,int b,int c,int d)
//Which reads four arguments and returns the greatest of them.
int max_of_four(int a,int b,int c,int d)
{
	int max;
	if(a>b)
	{
		max=a>c?a>d?a:dc>d?c:d;
	}
	else
	{
		b>c?b>d?b:d;
	}
}
main()
{
	int a,b,c,d;
	printf("Enter four number : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int ans = max_of_four(a,b,c,d);
	printf("%d",ans);
	
	return 0;
}
