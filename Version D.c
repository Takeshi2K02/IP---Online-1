#include <stdio.h>

int main ()

{
	int Airline_Option=0, Number_of_seats=0, service_Option=0;
	float Total_Price=0.0;
	char Class_type,extra_services;

	do
	{
		printf("Input Airline Option\t: ");
		scanf("%d", &Airline_Option);
	
		if(Airline_Option<1 || Airline_Option>4)
		{
			printf("You have entered an invalid Airline Option.\n\n");
		}
	}while(Airline_Option<1 || Airline_Option>4);

	if(Airline_Option==1)
	{
	printf("Class type ( E/ B )\t: ");
	scanf("%*c%c", &Class_type);
	
	printf("Number of seats\t\t: ");
	scanf("%d", &Number_of_seats);
	
		if(Class_type=='E' || Class_type=='e')
		{
			Total_Price = 36500.0 * Number_of_seats;
		}
		
		if(Class_type=='B' || Class_type=='b')
		{
			Total_Price = 77600.0 * Number_of_seats;
		}
	}
		
	else if(Airline_Option==2)
	{
	printf("Class type ( E/ B )\t: ");
	scanf("%*c%c", &Class_type);
	
	printf("Number of seats\t\t: ");
	scanf("%d", &Number_of_seats);
	
		if(Class_type=='E' || Class_type=='e')
		{
			Total_Price = 35800.0 * Number_of_seats;
		}
		
		if(Class_type=='B' || Class_type=='b')
		{
			Total_Price = 76500.0 * Number_of_seats;
		}
	}
			
	else if(Airline_Option==3)
	{
	printf("Class type ( E/ B )\t: ");
	scanf("%*c%c", &Class_type);
	
	printf("Number of seats\t\t: ");
	scanf("%d", &Number_of_seats);
	
		if(Class_type=='E' || Class_type=='e')
		{
			Total_Price = 54600.0 * Number_of_seats;
		}
		
		if(Class_type=='B' || Class_type=='b')
		{
			Total_Price = 84700.0 * Number_of_seats;
		}
	}
	
	else if(Airline_Option==4)
	{
	printf("Class type ( E/ B )\t: ");
	scanf("%*c%c", &Class_type);
	
	printf("Number of seats\t\t: ");
	scanf("%d", &Number_of_seats);
	
		if(Class_type=='E' || Class_type=='e')
		{
			Total_Price = 28500.0 * Number_of_seats;
		}
		
		if(Class_type=='B' || Class_type=='b')
		{
			Total_Price = 42800.0 * Number_of_seats;
		}
	}
		
	printf("Do you need any extra services ( y/n) : ");
	scanf("%*c%c", &extra_services);
		
	while(extra_services=='y' || extra_services=='Y')
	{
		do
		{
			printf(" Input your option : ");
			scanf("%d", &service_Option);
		
			if(service_Option<1 || service_Option>4)
			{
				printf("You have entered an invalid Service Option.\n\n");
			}
		}while(service_Option<1 || service_Option>4);			
		
			if(service_Option==1)
			{
				Total_Price	= Total_Price + (7800.0 * (float)Number_of_seats);
			}
			
			if(service_Option==2)
			{
				Total_Price	= Total_Price + (1500.0 * (float)Number_of_seats);
			}
			
			if(service_Option==3)
			{
				Total_Price	= Total_Price + (19500.0 * (float)Number_of_seats);
			}
			
			if(service_Option==4)
			{
				Total_Price	= Total_Price + (2000.0 * (float)Number_of_seats);
			}
		
		printf("Do you need any extra services ( y/n) : ");
		scanf("%*c%c", &extra_services);

	}
		
	printf(" Total Price : %.2f", Total_Price);

	return 0;
	
}
