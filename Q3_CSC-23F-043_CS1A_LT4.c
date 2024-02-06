#include<stdio.h>

// Function to calculate the sum of digits in a two-digit number
int sumOfDigits(int number)
{
	// Extract the tens and units digits
	int tens = number / 10;
	int units = number % 10;
	
	// Calculate the sum of digits
	int sum = tens + units;
		return sum;
}

int main()
{
	int Input, result;
	
	// Input a two-digit number from the user
	printf("Enter a two-digit number: ");
	scanf("%d", &Input);
	
	// Check if the entered number is a two-digit number
	if(Input >= 10 && Input <= 99)
	{
		// Call the function to calculate the sum of digits
		result = sumOfDigits(Input);
		
		// Display the result
		printf("The sum of the digits of %d is: %d\n", Input, result);
	}
	else
	{
		printf("Please enter a valid two-digit number.\n");
	}
		return 0;
}