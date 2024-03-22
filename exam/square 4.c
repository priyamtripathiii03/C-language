#include<stdio.h>

main()
{
	int n;
	printf("Enter the size : ",n);
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d] :",i);
		scanf("%d",&a[i]);
	}
	   for(i=0;i<n;i++)
	   {
	   printf("%d",a[i]*a[i]);
	   }
	    
	
}