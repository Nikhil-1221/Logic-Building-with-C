#include<stdio.h>
//Write a program which takes month number as an input from user and display number of days in that month
main()
{
	int m;
	printf("Enter month number : ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days");
			break;
		case 2:
			printf("28 Days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 Days");
			break;
		default:
			printf("Envalid number of month");
	}
}
