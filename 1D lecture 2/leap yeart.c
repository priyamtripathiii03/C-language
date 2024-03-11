#include<stdio.h>

main()
{
	int start;
	int end;
	printf("enter the starting year :");
	scanf("%d",&start);
	printf("enter the ending year :");
	scanf("%d",&end);
	int n=(end-start)/4+1;
	printf("expected leap years %d :",n);
	int leap[n];
	int i,y=0;
	
	for(i=start;i<=end;i++)
	{
		if(i%4==0)
		{
			leap[y]=i;
			y++;
		}		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",leap[i]);
	}
}
