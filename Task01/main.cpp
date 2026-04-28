#include "logic.h"

int main() {
	srand(time(NULL));
	int array[DEFAULT_SIZE];
	int size;

	do {
		system("cls");
		cout << "Input size of the array: ";
		cin >> size;
	} while (size <= 0 || size > DEFAULT_SIZE);

	init(array, size, 0, 15);

	print("Array: " + convert(array, size)+ "\n");
	print("Average temperature: " 
		+ to_string(get_average_temperature(array, size)) + "\n");
	print("Days with above-average temperatures: " 
		+ to_string(count_days_with_above_average_temperatures(array, size)) + "\n");
	print("Day with max temperature: " 
		+ to_string(define_max_temperature_day(array, size)) + "\n");
	print("Day with min temperature: "
		+ to_string(define_min_temperature_day(array, size)) + "\n");


	return 0;
}
