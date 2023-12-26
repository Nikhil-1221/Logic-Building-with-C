#include<stdio.h>
//Multiple logics
//Three steps rule- Understand problem
//					Test cases
//					Dry run
//write a program to print first 10 natural numbers
//main()
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",i+1);
//	}
//}


//write a programe to print first 10 natural number in reverse order
//main()
//{
//	int i;
//	for(i=10;i>0;i--)
//	{
//		printf("%d\n",i);
//	}
//}

//main()
//{
//	int i;
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",10-i);
//	}
//}


//Write a program to print first N odd natural numbers
main()
{
	int N,i;
	printf("Enter a number : ");
	scanf("%d",&N);
	for(i=1;i<2*N;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
}

//main()
//{
//	int N,i;
//	printf("Enter a number : ");
//	scanf("%d",&N);
//	for(i=0;i<N;i++)
//	{
//			printf("%d\n",i*2+1);
//	}
//}
