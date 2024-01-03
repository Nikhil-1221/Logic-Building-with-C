//#include<stdio.h>
//main()
//{
//	int a,b;
//	for(a=1;a<=5;a++)
//	{
//		for(b=1;b<=2*a-1;b++)
//			printf("%d",b);
//		printf("\n");
//	}
//}

//write a program to check wether a given number is Prime or not 
//main()
//{
//	int a,i,count=0;
//	printf("enter a number : ");
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		if(a%i==0){
//			count++;
//		}
//	}
//	if(count==2){
//		printf("Prime");
//	}
//	else{
//		printf("Not prime");
//	}
//}

//main()
//{
//	int i,n;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	for(i=2;i<n;i++)
//		if(n%i==0)
//			break;
//	if(i==n)
//		printf("Prime");
//	else
//		printf("Not Prime");
//}


//main()
//{
//	int i,n;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	for(i=2;i<=n/2;i++)
//		if(n%i==0)
//			break;
//	if(i==n/2+1)
//		printf("Prime");
//	else
//		printf("Not Prime");
//}

//main()
//{
//	int i,n,s;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	s=sqrt(n);
//	for(i=2;i<=s;i++)
//		if(n%i==0)
//			break;
//	if(i==s+1)
//		printf("Prime");
//	else
//		printf("Not Prime");
//}
