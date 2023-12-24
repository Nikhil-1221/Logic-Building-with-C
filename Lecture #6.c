#include<stdio.h>
//write a program to print greatest number among 3 given numbers
//main()
//{
//	int a,b,c;
//	printf("Enter three numbera : ");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>=b && a>=c)
//	{
//		printf("%d",a);
//	}
//	else if(b>=a && b>=c)
//	{
//		printf("%d",b);
//	}
//	else
//	{
//		printf("%d",c);
//	}
//	
//}

//main()
//{
//	int a,b,c;
//	printf("Enter three numbera : ");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>=b && a>=c)
//	{
//		printf("%d",a);
//	}
//	else if(b>c)
//	{
//		printf("%d",b);
//	}
//	else
//		printf("%d",c);
//	
//}


//most eficient
//main()
//{
//	int a,b,c;
//	printf("Enter three numbera : ");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b)
//	{
//		if(a>c)
//		{
//		printf("%d",a);
//		}
//		else
//		{
//			printf("%d",c);
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			printf("%d",b);
//		}
//		else
//		{
//			printf("%d",c);
//		}
//	}
//}


//conditional operator
//main()
//{
//	int a,b,c;
//	printf("Enter three numbera : ");
//	scanf("%d %d %d",&a,&b,&c);
//	(a>b)?(a>c)?printf("%d",a):printf("%d",c):(b>c)?printf("%d",b):printf("%d",c);
//}

main()
{
	int a,b,c;
	printf("Enter three numbera : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",a>b?a>c?a:c:b>c?b:c);
}
