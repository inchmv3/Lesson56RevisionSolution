// Task 05 [The number of digits]
// Количество цифр числа
// 
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество цифр 
// в заданном целом числе.
#include "logic.h"
int recursion(int number) {
	if (number < 0) {
		number = -number;
	}

	if (number < 10) {
		return 1;
	}

	return 1 + recursion(number / 10);

}
int count(int number) {

	return recursion(number);
}