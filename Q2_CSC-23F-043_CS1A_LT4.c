#include<stdio.h>

// Function to convert temperature from Celsius to Kelvin
double convertToKelvin(double celsius)
{
	// Kelvin formula: K = C + 273.15
	double kelvin = celsius + 273.15;
	return kelvin;
}

int main()
{
	double celsius, kelvin;
	
	// Input temperature in Celsius
	printf("Enter temperature in Celsius: ");
	scanf("%lf", &celsius);
	
	// Call the function to convert to kelvin
	kelvin = convertToKelvin(celsius);
	
	// Display the result
	printf("%.2f Celsius is equal to %.2f Kelvin.\n", celsius, kelvin);
	
	return 0;
}