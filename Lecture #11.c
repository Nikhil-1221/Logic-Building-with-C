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
	int a,b,rev=0;
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a>0){
	b=a%10;
	rev=rev*10+b;
	a=a/10;
	}
	printf("%d",rev);
}

//main()
//{
//	int i,a;
//	printf("Enter a number : ");
//	scanf("%d",&a)
//	do{
//		
//	}
//	while()
//}
