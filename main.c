
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int array[] = {12, 63, 44, 89, 3, 55, 73, 27, 37, 18, 14, 24, 30, 52, 69};
	int number_of_bytes = sizeof(array);
	int number_of_elements = sizeof(array)/sizeof(int);
	int counter = 0;
	int counter2 = 0;
	int stored_element;
	int return_element;
	int position_of_return_element;
	int sum = 0;
	int j = 0;
	int k = 0;

printf("\n");
printf("Size of Array: %lu bytes\n", number_of_bytes);
printf("Length of Array: %lu elements\n", number_of_elements);
printf("\n");
printf("PART 1: \n");
printf("The values stored into the array are : \n");
for (int i = 0; i < number_of_elements; i++) {
	printf("%lu ", array[i]);	
}
printf("\n");
printf("\n");
printf("PART 2:\n");
printf("The values stored into the array in reverse are : \n");
for (int i = number_of_elements-1; i >= 0; i--) {
	printf("%lu ", array[i]);
}
printf("\n");
printf("\n");
printf("PART 3:\n");
printf("The smallest value stored in the array is :\n");
for (int i = 0; i < number_of_elements; i++) {
	stored_element = array[i];
	counter2 = 0;
	for (int j = 0; j < number_of_elements; j++) {
		++counter;
		if (stored_element > array[j]){
			counter2++;
		}
		if (counter2 == 0 & counter > (number_of_elements-1)) {
			return_element = stored_element;
			position_of_return_element = i + 1;
		}		
	}
}
printf("value: %lu ", return_element);
printf("at the %dth position from the left\n", position_of_return_element);
printf("\n");
printf("PART 4:\n");
printf("The sum (total) value of the array is : ");
for (int i = 0; i < number_of_elements; i++) {
	sum = sum + array[i];
	printf("%lu ", array[i]);
	if (i < (number_of_elements-1)) {
		printf("+ ");
	}
	if (i == (number_of_elements-1)) {
		printf(" equals: %lu ", sum);
	}	
}
printf("\n");
printf("\n");
printf("PART 5:\n");
printf("Copy the array into a new array, but in reverse order :\n");
printf("Original array :\n ");
for (int i = 0; i < number_of_elements; i++) {
	printf("%lu ", array[i]);
}
printf("\n");
printf("New (Reversed) array :\n ");
int copy_array[number_of_elements];
for (int i = number_of_elements-1; i >= 0; i--) {
	copy_array[j] = array[i];
	j++;
}
for (int k = 0; k < number_of_elements; k++) {
	printf("%lu ", copy_array[k]);
}
printf("\n");
printf("\n");
printf("PART 6:\n");
printf("Switch the first value in the array with the last value in the array :\n");
printf("Original array :\n ");
for (int i = 0; i < number_of_elements; i++) {
	printf("%lu ", array[i]);
}
printf("\n");
printf("Changed array :\n ");
printf("%lu ", array[number_of_elements-1]);
for (int i = 1; i < (number_of_elements-1); i++) {
	printf("%lu ", array[i]);
}
printf("%lu\n", array[0]);
printf("\n");
printf("PART 7:\n");
printf("Sort the array in ascending order :\n");
printf("Original array :\n ");
for (int i = 0; i < number_of_elements; i++) {
	printf("%lu ", array[i]);
}
printf("\n");
printf("Changed array :\n ");
for (int i = 0; i < number_of_elements; i++) {
	for (int j = i + 1; j < number_of_elements; j++) {
		if (array[i] > array[j]) {
			stored_element = array[i];
			array[i] = array[j];
			array[j] = stored_element;
		}
	}
}
for (int k = 0; k < number_of_elements; k++) {
	printf("%lu ", array[k]);
}
printf("\n");
printf("\n");
}

