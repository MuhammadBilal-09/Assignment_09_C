#include<stdio.h>

// Function to convert temperature from Fahrenheit to Celsius
double convertToCelsius(double fahrenheit)
{
	// Celsius formula: C = (5.0 / 9.0) * (F - 32)
	double celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
	return celsius;
}

int main()
{
	double fahrenheit, celsius;
	
	// Input temperature in Fahrenheit
	printf("Enter temperature in Fahrenheit: ");
	scanf("%lf", &fahrenheit);
	
	// Call the function to convert to Celsius
	celsius = convertToCelsius(fahrenheit);
	
	// Display the result
	printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
		return 0;
}