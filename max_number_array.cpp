#include"library.h"
#include"function.h"

float max_number_array(float* array, int size)

//
{
	float max = fabs(array[0]);
	int max_i;

	for (int i = 0; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
			max_i = i;
		}
	}
	return max_i;
}