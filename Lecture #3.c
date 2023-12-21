#include<stdio.h>
//write a c program to calculate area of circle
//main()
//{
//	int r;
//	printf("Enter radious of circle :");
//	scanf("%d",&r);
//	printf("\nArea of circle of radious %d is %lf",r,r*r*3.14);
//}

//write a program to calculate average of three numbers

//Note interger/integer=integer
//	   return 0 return the value 0 to the operating system for normal execution
//	   return 1 return the value 1 to the operating system for error occured in excution
//main()
//{
//	int a,b,i;
//	float avg,sum;
//	printf("Enter a number :");
//	scanf("%d",&a);
//	for(i=0;i<a;i++){
//		printf("Enter %d number :",i+1);
//		scanf("%d",&b);
//		sum=sum+b;
//	}
//	avg=sum/a;
//	printf("Average of %d number is %lf",a,avg);
//	return 0;
//}


//write a program to print only last digit of given number
main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Last digit of %d is %d",a,a%10);
}
