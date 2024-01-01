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

//int main()
//{
//	int a,b,rev=0;
//	printf("Enter a number : ");
//	scanf("%d",&a);
//	while(a>0){
//	b=a%10;
//	rev=rev*10+b;
//	a=a/10;
//	}
//	printf("%d",rev);
//}


int main()
{
	int a,b,rev=0,count=0,lock=1;
	printf("Enter a number : ");
	scanf("%d",&a);
	while(a>0){
	b=a%10;
	if(b==0 && lock==1){
		count++;
	}
	else{
		lock=0;
	}
	rev=rev*10+b;
	a=a/10;
	}
	while(count--){
		printf("%c",'0');
	}
	printf("%d",rev);
}



