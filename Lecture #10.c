#include<stdio.h>
//Dryrun

//main()
//{
//	int x=(1,2,3);//x=3 last value assign to x
//	while(x)
//	{
//		printf("%d ",x);
//		x--;
//	}
//}
//output 3 2 1

//main()
//{
//	int x;
//	x=1,2,3;//x=1 first value assign to x
//	while(x)
//	{
//		printf("%d ",x);
//		x--;
//	}
//}
//output 1

//write a program to calculate sum of first Natural numbers.
//main()
//{
//	int i,n,sum=0;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		sum=sum+(i*2-1);
//	}
//	printf("Sum of first %d natural number is %d",n,sum);
//}

//main()
//{
//	int x=128;
//	for(;x;x>>=1)//Right shift 00000010 to 00000001
//		printf("%d\n",x);
//}
//output 128 64 32 16 8 4 2 1

//main()
//{
//	int x=1,a,s;
//	for(s=0,a=5;a;x<<=1,a--)//left shift 00000001 to 00000010
//							//x=x<<1 x me assign karo x leftshift 1
//	{
//		s=s+x;
//	}
//	printf("%d ",s);
//}
//output 31
