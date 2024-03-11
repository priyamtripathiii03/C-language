#include<stdio.h>

main()
{
	int n,i;
	int square;
	printf("enter the array a size:",n);
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d]:",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		square=a[i]*a[i];
		printf(" square : %d ",square);
	}
}
