#include<stdio.h>

// The program takes in user input and adds them to the current total value if and only if they are odd.  It is capable of adding/summing all integer values apart from 1 which will reset the total of the sum and 0 that will exit the program.  Additionally the program is unable to handle negative values appropriately and also starts 2 due to modulo. //

int main() {
int sum, loop_value2, user_inputted_value, indicator; // Defining/declaring variables //

while(1) {	// Repeat loop until user inputs 0 causing program to break out of loop //
	sum = 0;	// Intializing sum and resetting when user inputs 1 and program loops around again //
	printf("Input? ");  // Prompt for user input //
	scanf("%d", &user_inputted_value);   // Taking in user input //
	if (user_inputted_value == 0) {	   // Determines if user inputted the exit value 0 //
	       	break;		// Breaks out of program due to user inputting 0 //
	}
	for (int loop_value1 = 1; loop_value1 <= user_inputted_value; loop_value1++) { // iterates up to user inputted value //    
		indicator = 0;		// Establishes/resets default value //
		for (loop_value2 = 2; loop_value2 <= loop_value1; loop_value2++) // Determines the amount to add to sum //
			if (loop_value1 % loop_value2 == 0)  indicator++;  // Amount you want to add is in fcat valid (user is trying to add an odd number //
		if (indicator == 1)  sum = sum + loop_value1;   // Will add to sum if the amount being is valid //
	}
	printf("The final total is: %d\n", sum);   // Prints out final sum in a nice format //
}
return 0;	// Required output for when program terminates //
}
