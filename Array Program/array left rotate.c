#include<stdio.h>
main()
{

	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
    int a[n];
    int i,j,temp;
    for(i=0; i<n; i++)
    {
    	printf("enter the value of a[%d] :",i);
    	scanf("%d",&a[i]);
	}
	int k;
		printf("enter the value :");
    	scanf("%d",&k);
    	
    for(i=1; i<=k; i++)
    {
    	temp=a[n-1];
    	for(j=n; j>0; j--)
    	{
    		a[j]=a[j-1];
    		
		}
		a[0]=temp;
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}
