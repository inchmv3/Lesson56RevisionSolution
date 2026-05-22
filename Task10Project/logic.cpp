// Task 10 [The number of positive elements]
// Количество положительных элементов
//
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество положительных элементов вектора.

#include "logic.h"

int count_of_positive_elements(int vector[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (vector[i] < 0) {
			count++;
		}
	}
	return 0;
}