#include <stdio.h>
int main(void)
{
	printf("Welcome to Yogurt, Oranges, and Energy Drinks Surplus Outlet Mall!\n");

// orange data 
	
	double pounds_of_oranges;
	double cost_of_oranges;
	
	printf("How many pounds of oranges do you have?\n"); 

	scanf("%lf", &pounds_of_oranges);  

	cost_of_oranges = 0.95*pounds_of_oranges;

// energy drink data

	printf("How many energy drinks do you have?\n");
	double drinks;
	double cost_of_drinks;
        double tax_drink;
	scanf("%lf", &drinks);
	cost_of_drinks = 1.50*drinks;
	tax_drink = 0.065*cost_of_drinks;

// Yogurt Data

	printf("How many yogurts do you have?\n");

	double yogurts;
	double cost_of_yogurts;
	double tax_yogurts;

	scanf("%lf", &yogurts);
	cost_of_yogurts = 0.75*yogurts;
	tax_yogurts = 0.065*cost_of_yogurts;

//Itemized Bill

	printf("ITEM               COST          TAX\n");
	printf("Oranges            %.2f\n", cost_of_oranges);
	printf("Energy Drinks      %.2f            %.2f\n", cost_of_drinks, tax_drink);
	printf("Yogurt             %.2f            %.2f\n", cost_of_yogurts, tax_yogurts);

// Totals

	double a;
	double b; 
	double total;

	a = cost_of_oranges + cost_of_drinks + cost_of_yogurts;
	b = tax_drink + tax_yogurts;

	printf("Sub Total: %.2f\n", a);
	printf("Tax: %.2f\n", b); 

	total = a + b;  

	printf("Total: %.2f\n", total); 
	printf("Thanks for shopping at Yogurt, Oranges, and Energy Drinks Surplus Outlet Mall!\n");

	return 0;
}
