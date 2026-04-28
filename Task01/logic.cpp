#include "logic.h"

double get_average_temperature(int array[], int size) {
	double avg = 0.0;
	for (int i = 0; i < size; i++) {
		avg += array[i];
	}
	return avg / size;
}
int count_days_with_above_average_temperatures(int array[], int size) {
	int day = 0;
	double avg = get_average_temperature(array, size);
	for (int i = 0; i < size; i++) {
		if (array[i] > avg) {
			day++;
		}
	}
	return day;
}
int define_min_temperature_day(int array[], int size) {
	int min = array[0];
	int day = 0;
	for (int i = 1; i < size; i++) {
		if (min >= array[i]) {
			min = array[i];
			day = i;
		}
	}
	return day + 1;
}
int define_max_temperature_day(int array[], int size) {
	int max = array[0];
	int day = 0;
	for (int i = 1; i < size; i++) {
		if (max <= array[i]) {
			max = array[i];
			day = i;
		}
	}
	return day + 1;
}