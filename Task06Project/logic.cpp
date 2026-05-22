// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.
#include "logic.h"

int recursion(int number) {
	if (number == 0) {
		return 0;
	}
	
	return recursion(number - 2) + number;
}

int sum(int number) {
	if (number % 2 != 0) {
		number--;
	}

	if (number < 0) {
		return -1;
	}

	// 8--> 8 + 6 + 4 + 2 0
	// 7 -- 6
	

	return recursion(number);
	
}