#include<stdio.h>
#include<string.h>

struct employe 
{
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	int experience;
	char company_name[100];
};
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);

	struct employe emp[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the emp_id :");
		scanf("%d",&emp[i].id);
		
		printf("Enter the emp_name :");
		scanf(" %s",&emp[i].name);
		
		printf("Enter the emp_age :");
		scanf("%d",&emp[i].age);
		
		printf("Enter the emp_role :");
		scanf(" %s",&emp[i].role);
		
		printf("Enter the emp_city :");
		scanf(" %s",&emp[i].city);
		
		printf("Enter the emp_experience:");
		scanf("%d",&emp[i].experience);
		
		printf("Enter emp_company_name :");
		scanf(" %s",&emp[i].company_name);
		
		printf("\n\n");
	}
	
	for(i=0; i<n; i++)
	{
		printf("employe %\n",i+1);
		printf(" emp_id       : %d \n",emp[i].id);
		printf(" emp_name     : %s \n",emp[i].name);
		printf(" emp_age      : %d \n",emp[i].age);
		printf(" emp_course   : %s \n",emp[i].role);
		printf(" emp_city     : %s\n" ,emp[i].city);
		printf(" emp_standard : %d \n",emp[i].experience);
	    printf(" emp_school   : %s \n",emp[i].company_name);
	}
	printf("\n\n");
}
