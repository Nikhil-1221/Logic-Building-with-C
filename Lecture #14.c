#include<stdio.h>
//				j
//			1234567
//		1	ABCDCBA
//	    2	ABC CBA
//	 i	3	AB   BA
//		4	A     A

#include <ctype.h> 
main()
{
	int i,j,a=65,r;
	printf("Enter no of rows : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=2*r-1;j++)
		{
			if(j<=r+1-i || j>=r-1+i)
			{
				printf("%c",a);
				if(j<r+1-i)
				{
					a++;
				}
				if(j>=r-1+i)
					{
						a--;
					}
			}
		else
			{
				printf(" ");
			}
		}
		a++;
		printf("\n");
	}
}
