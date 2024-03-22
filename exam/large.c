#include<stdio.h>

main()
{
	int n;
	printf("Enter the size : ",n);
	scanf("%d",&n);
	int a[n];
	int i,large=0;
	for(i=0;i<n;i++)
	{
		printf("enter the array element a[%d] :",i);
		scanf("%d",&a[i]);
	}
	   for(i=0;i<n;i++)
	   {
	   	if(large<a[i])
	   	{
	   		large=a[i];
		   }
	   }
	    printf("large : %d",large);
	
}