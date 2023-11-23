#include<stdio.h>

main()
{
	int start = 1;
	int end=50,sum=0;
	

	
	
	repeat :
		if(start <= end)
		 {
		 		start++;
		    if (start%2!=0 && start%3!=0 && start%5!=0 && start%7!=0 || start==2 ||  start==3 ||  start==5 ||  start==7)
		       {
			     printf("%d ",start);
			     	sum+=start;	
		        }
				goto repeat;
			
		}
	
		printf("\nSum is  : %d",sum);
}
