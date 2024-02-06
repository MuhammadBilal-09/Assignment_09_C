#include<stdio.h>

int msd(int number)
{
	// Check if the number is a 3-digit number
	if(number < 100 || number > 999)
	{
		printf("Error: Input must be a 3-digit number.\n");
		return -1;		// Return an error code	
	}
	
	// Extract the most significant digit
	int mostSignificantDigit = number / 100;
		return mostSignificantDigit;
}

int main()
{
	int number;
	
	// Get input from the user
	printf("Enter a 3-digit number: ");
	scanf("%d", &number);
	
	// Call the msd function and display the result
	int result = msd(number);
	if(result != -1)
	{
		printf("The most significant digit is: %d\n", result);
	}
	return 0;
}