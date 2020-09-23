#include"library.h"
#include"function.h"


float Output_array(float* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << "   ";
	return size;
}