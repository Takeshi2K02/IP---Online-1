#include <stdio.h>

int main ()

{
	int Pizza_Option=0, Number_of_Pizza=0, toppings_Option=0;
	float Total_Price;
	char Pizza_Size, extra_toppings;

	do
	{
		printf("Input Pizza Option\t\t: ");
		scanf("%d", &Pizza_Option);
	
		if(Pizza_Option<1 || Pizza_Option>3)
		{
			printf("You have entered an invalid Pizza Option.\n\n");
		}
	}while(Pizza_Option<1 || Pizza_Option>3);
	
	if(Pizza_Option==1)
	{
	printf("Size of the Pizza ( P/M/L)\t: ");
	scanf("%*c%c", &Pizza_Size);
	
	printf("Number of Pizzas\t\t: ");
	scanf("%d", &Number_of_Pizza);
	
		if(Pizza_Size=='P' || Pizza_Size=='p')
		{
			Total_Price = 560.0 * (float)Number_of_Pizza;
		}
		
		if(Pizza_Size=='M' || Pizza_Size=='m')
		{
			Total_Price = 920.0 * (float)Number_of_Pizza;
		}
		
		if(Pizza_Size=='L' || Pizza_Size=='l')
		{
			Total_Price = 1800.0 * (float)Number_of_Pizza;
		}
	}
		
	if(Pizza_Option==2)
	{
	printf("Size of the Pizza ( P/M/L)\t: ");
	scanf("%*c%c", &Pizza_Size);
	
	printf("Number of Pizzas\t\t: ");
	scanf("%d", &Number_of_Pizza);
	
		if(Pizza_Size=='P' || Pizza_Size=='p')
		{
			Total_Price = 340.0 * (float)Number_of_Pizza;
		}
		
		if(Pizza_Size=='M' || Pizza_Size=='m')
		{
			Total_Price = 660.0 * (float)Number_of_Pizza;
		}
		
		if(Pizza_Size=='L' || Pizza_Size=='l')
		{
			Total_Price = 1300.0 * (float)Number_of_Pizza;
		}
	}
			
	if(Pizza_Option==3)
	{
	printf("Size of the Pizza ( P/M/L)\t: ");
	scanf("%*c%c", &Pizza_Size);
	
	printf("Number of Pizzas\t\t: ");
	scanf("%d", &Number_of_Pizza);
	
		if(Pizza_Size=='P' || Pizza_Size=='p')
		{
			Total_Price = 760.0 * (float)Number_of_Pizza;
		}
		
		if(Pizza_Size=='M' || Pizza_Size=='m')
		{
			Total_Price = 1100.0 * (float)Number_of_Pizza;
		}
		
		if(Pizza_Size=='L' || Pizza_Size=='l')
		{
			Total_Price = 2100.0 * (float)Number_of_Pizza;
		}
	}
		
	printf("Do you need any extra toppings ( y/n) : ");
	scanf("%*c%c", &extra_toppings);
		
	while(extra_toppings=='y' || extra_toppings=='Y')
	{		
		do
		{
			printf(" Input your option : ");
			scanf("%d", &toppings_Option);	
		
			if(toppings_Option<1 || toppings_Option>4)
			{
				printf("You have entered an invalid toppings option.\n\n");
			}
		}while(toppings_Option<1 || toppings_Option>4);
		
		
			if(toppings_Option==1)
			{
				Total_Price	= Total_Price + (320.0 * (float)Number_of_Pizza);
			}
			
			if(toppings_Option==2)
			{
				Total_Price	= Total_Price + (140.0 * (float)Number_of_Pizza);
			}
			
			if(toppings_Option==3)
			{
				Total_Price	= Total_Price + (130.0 * (float)Number_of_Pizza);
			}
			
			if(toppings_Option==4)
			{
				Total_Price	= Total_Price + (150.0 * (float)Number_of_Pizza);
			}
			
		printf("Do you need any extra toppings ( y/n) : ");
		scanf("%*c%c", &extra_toppings);

	}
		
	printf(" Total Price Rs : %.2f", Total_Price);

	return 0;
	
}
