#include<stdio.h>

// Function to calculate voltage based on Ohm's Law: V = IR
double calculateVoltage(double current, double resistance)
{
	// Voltage formula: V = IR
	double voltage = current * resistance;
	return voltage;
}

int main()
{
	double current, resistance, voltage;
	
	// Input current from the user
	printf("Enter current(in Amperes): ");
	scanf("%lf", &current);
	
	// Input resistance from the user
	printf("Enter resistance(in Ohms): ");
	scanf("%lf", &resistance);
	
	// Call the function to calculate voltage
	voltage = calculateVoltage(current, resistance);
	
	// Display the result
	printf("Voltage (V) = %.2f Volts\n", voltage);
		return 0;
}