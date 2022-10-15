#include <stdio.h>

int main ()

{
	int Room_Option=0, Number_of_guests=0, Number_of_Days=0, tours_Option=0;
	float Total_Price;
	char Additional_tours;
	
	printf("Input Room Option : ");
	scanf("%d", &Room_Option);
	
	printf("Number of guests  : ");
	scanf("%d", &Number_of_guests);
	
	printf("Number of Days    : ");
	scanf("%d", &Number_of_Days);
	
	if(Room_Option==1)
	{
		if(Number_of_guests<=2)
		{
			Total_Price = 45000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
		
		else if(Number_of_guests>=5)
		{
			Total_Price = 44000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
		
		else if(Number_of_guests<5)
		{
			Total_Price = 43000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
	}
		
	else if(Room_Option<=2)
	{
		if(Number_of_guests<=2)
		{
			Total_Price = 40000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
		
		else if(Number_of_guests>=5)
		{
			Total_Price = 38000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
		
		else if(Number_of_guests<5)
		{
			Total_Price = 35000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
	}
		
	else if(Room_Option==3)
	{
		if(Number_of_guests<=2)
		{
			Total_Price = 37500.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
		
		else if(Number_of_guests>=5)
		{
			Total_Price = 35000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
		
		else if(Number_of_guests<5)
		{
			Total_Price = 32000.0 * (float)Number_of_guests * (float)Number_of_Days;
		}
	}
	
	
	printf("Do you need any additional tours ( y/n) : ");
	scanf("%*c%c", &Additional_tours);
		
	while(Additional_tours=='y' || Additional_tours=='Y')
	{
		printf(" Input your option : ");
		scanf("%d", &tours_Option);	
		
		if(Additional_tours=='y' || Additional_tours=='Y')
		{
			if(tours_Option==1)
			{
				Total_Price = Total_Price + (3500.0 * (float)Number_of_guests);
			}
			
			if(tours_Option==2)
			{
				Total_Price = Total_Price + (1000.0 * (float)Number_of_guests);
			}
			
			if(tours_Option==3)
			{
				Total_Price = Total_Price + (1500.0 * (float)Number_of_guests);
			}
			
			if(tours_Option==4)
			{
				Total_Price = Total_Price + (2000.0 * (float)Number_of_guests);
			}
					
		}
		
		printf("Do you need any additional tours ( y/n) : ");
		scanf("%*c%c", &Additional_tours);

	}
		
	printf(" Total Price : %.2f", Total_Price);

	return 0;
	
}
