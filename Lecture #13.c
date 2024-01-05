#include<stdio.h>
//				j
//			1 2 3 4
//		1	* 
//	  i 2	* *
//		3	* * *
//		4	* * * *

//main()
//{
//	int i,j,r;
//	printf("Enter the number of rows : ");
//	scanf("%d",&r);
//	for(i=1;i<=r;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


//main()
//{
//	int i,j,r;
//	printf("Enter the number of rows : ");
//	scanf("%d",&r);
//	for(i=1;i<=r;i++)
//	{
//		for(j=1;j<=r;j++)
//		{
//			if(j<=i)
//			{
//				printf(" * ");
//			}
//			else
//			{
//				printf(" $ ");
//			}
//		}
//		printf("\n");
//	}
//}


//				j
//			123456789
//		1	    * 
//	    2	   ***
//	 i	3	  *****
//		4	 *******
//		5	*********

//main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=9;j++)
//		{
//			if(j>=6-i && j<=4+i)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}

//main()
//{
//	int i,j,r;
//	printf("Enter number of row : ");
//	scanf("%d",&r);
//	for(i=1;i<=r;i++)
//	{
//		for(j=1;j<=2*r-1;j++)
//		{
//			if(j>=r+1-i && j<=r-1+i)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}


//				j
//			123456789
//		1	    1 
//	    2	   121
//	 i	3	  12321
//		4	 1234321
//		5	123454321


//main()
//{
//	int i,j,r,k;
//	printf("Enter number of row : ");
//	scanf("%d",&r);
//	for(i=1;i<=r;i++)
//	{
//		k=1;
//		for(j=1;j<=2*r-1;j++)
//		{
//			if(j>=r+1-i && j<=r-1+i)
//			{
//				printf("%2d",k);
//				if(j<r)
//				{
//					k++;	
//				}
//				else
//				{
//					k--;
//				}
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}
