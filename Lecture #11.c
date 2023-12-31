#include<stdio.h>
//main()
//{
//	int i=1;
//	do
//	{
//		printf("%d",i);
//		i++;
//	}
//	while(i=i-2);
//}

//Agenda:Understand importance of mathematics in programming
//write a program to reserve a given number

int main()
{
	int i = 1,N;
	printf("Enter the value of N\n");
	scanf("%d",&N);
	while(i<=N)
	{
		printf("%d",N-1);
		i++;
	}
}
