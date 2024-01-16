#include<stdio.h>
//Function in c

//Write a function to sum of two numbers(Take nothing returns nothing)
//void sum()
//	{
//		int a,b,sum;
//		printf("Enter two numbers : ");
//		scanf("%d %d",&a,&b);
//		sum=a+b;
//		printf("Sum of %d and %d is %d",a,b,sum);
//	}
//main()
//{
//	sum();
//}


//Write a function to sum of two numbers(Take something returns nothing)
//void sum(int a,int b)
//	{
//		int sum;
//		sum=a+b;
//		printf("Sum of %d and %d is %d",a,b,sum);
//	}
//main()
//{
//	int x,y;
//	printf("Enter two numbers : ");
//	scanf("%d %d",&x,&y);
//	sum(x,y);
//}


//Write a function to sum of two numbers(Take nothing returns something)
//int sum()
//	{
//		int a,b;
//		printf("Enter two numbers : ");
//		scanf("%d %d",&a,&b);
//		return a+b;
//	}
//main()
//{
//	int S;
//	S=sum();
//	printf("Sum of two no is %d",S);
//}


//Write a function to sum of two numbers(Take something returns something)
//int sum(int a,int b)
//	{
//		return a+b;
//	}
//main()
//{
//	int x,y,S;
//	printf("Enter two numbers : ");
//		scanf("%d %d",&x,&y);
//	S=sum(x,y);
//	printf("Sum of %d and %d is %d",x,y,S);
//}


//Write a function to calculate area of circle (Take something returns something)
//float area(int r)
//	{
//		return 3.14*r*r;
//	}
//main()
//{
//	int x;
//	float s;
//	printf("Enter radious of circle : ");
//		scanf("%d",&x);
//		s=area(x);
//		printf("Area of circle of radious %d is %f",x,s);
//}

//Write a function to check wether a given number is even or odd.
//Function will return 1 if number is even and will return 0 if number is odd.
//(Take something returns something)

//int Iseven(int a)
//{
//	if(a%2==0)
//	{
//		return 1;
//	}
//	else
//	return 0;
//}
//main()
//{
//	int b;
//	printf("Enter a number : ");
//	scanf("%d",&b);
//	int p=Iseven(b);
//	printf("%d",p);
//}

//int Iseven(int a)
//{
//	if(a%2==0)
//		return 1;
//		return 0;
//}
//main()
//{
//	int b;
//	printf("Enter a number : ");
//	scanf("%d",&b);
//	int p=Iseven(b);
//	printf("%d",p);
//}


//int Iseven(int a)
//{
////	return a%2==0;
//	return !(a%2);
//}
//main()
//{
//	int b;
//	printf("Enter a number : ");
//	scanf("%d",&b);
//	int p=Iseven(b);
//	printf("%d",p);
//}

//Write a function to calculate factorial of a number.(Take something return something)
//int factorial(int a)
//{
//	int i,fact=1;
//	for(i=1;i<=a;i++)
//	{
//		fact=fact*i;
//	}
//	return fact;
//}
//main()
//{
//	int b,c;
//	printf("Enter a number : ");
//	scanf("%d",&b);
//	c=factorial(b);
//	printf("Factorial of %d is %d",b,c);
//}

//int factorial(int a)
//{
//	int f=1;
//	while(a)
//	{
//		f=f*a;
//		a--;
//	}
//	return f;
//}
//main()
//{
//	int b,c;
//	printf("Enter a number : ");
//	scanf("%d",&b);
//	c=factorial(b);
//	printf("Factorial of %d is %d",b,c);
//}


//Write function to find number of possible combination be made out of n items selected at a time. (Take something return something)
//int factorial(int a)
//{
//	int i,fact=1;
//	for(i=1;i<=a;i++)
//	{
//		fact=fact*i;
//	}
//	return fact;
//}
//int combination(int n,int r)
//{
//	return factorial(n)/factorial(n-r)/factorial(r);
//}
//main()
//{
//	int n,r,c;
//	printf("Enter numbers : ");
//	scanf("%d %d",&n,&r);
//	c=combination(n,r);
//	printf("Number of combination is : %d",c);
//}
