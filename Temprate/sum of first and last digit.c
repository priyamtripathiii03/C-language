#include<stdio.h>

main()
{
	int start;
	printf("Enter any number : ");
	scanf("%d",&start);
	int ld=start%10;
	for(start;start>9;)
	{
	  start = start/10;	
	}
	printf("%d + %d = %d",start,ld,start+ld);
	
}