#include<stdio.h>

// Function to calculate percentage marks
double calculatePercentage(int quizMarks)
{
	// Total marks for Quiz #1
	const int totalMarks = 15;
	
	// Calculate percentage
	double percentage = (double)quizMarks / totalMarks * 100.0;
	
	return percentage;
}

int main()
{
	int quizMarks;
	double percentage;
	
	// Input Quiz #1 marks from the student
	printf("Enter Quiz #1 marks (out of 15): ");
	scanf("%d", &quizMarks);
	
	// Checks if the entered marks are within the valid range
	if(quizMarks >= 0 && quizMarks <= 15)
	{
		// Call the function to calculate percentage marks
		percentage = calculatePercentage(quizMarks);
		
		// Display the result
		printf("Percentage marks: %.2f%%\n", percentage);
	}
	else
	{
			printf("Please enter valid Quiz #1 marks(between 0 and 15).\n");
	}
	return 0;
}