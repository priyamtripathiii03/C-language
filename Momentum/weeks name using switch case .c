// Write C program use switch statement. Display Monday to Sunday.
#include<stdio.h>

main()
{
	char a;
	printf("enter the day:");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'S':printf("Sunday");
		break;
		case 'M':printf("Monday");
		break;
		case 'T':printf("Tuesday");
		break;
		case 'W':printf("Wednesday");
		break;
		case 't':printf("Thursday");
		break;
		case 'F':printf("Friday");
		break;
		case 's':printf("Saturday");
		break;
		default :printf("Enter the valid Day (Between Sunday to Saturday)");
		
	}
	
}

