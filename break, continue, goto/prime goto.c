#include<stdio.h>

main()
{
	int start = 2;
	int end=50,sum=17;
	

	printf("2 3 5 7 ");
	
	repeat :
		if(start <= end)
		 {
		 		start++;
		    if (start%2!=0 && start%3!=0 && start%5!=0 && start%7!=0)
		       {
			     printf("%d ",start);
			     	sum+=start;	
		        }
				goto repeat;
			
		}
	
		printf("\nSum is  : %d",sum);
}
