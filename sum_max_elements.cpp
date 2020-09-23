#include"library.h"
#include"function.h"

float sum_max_elements(float* array, int size)
{//поиск первого положительного элемента
	cout << endl;
	float max = 0;
	int imax = 0;
	bool q;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > 0)
		{
			max = array[i];
			imax = i;
			break;
		}
	}

	// сумма элементов, после первого положительного элемента
	double sum = 0;
	for (int i = imax; i < size; i++)
	{
		{
			if (array[i] > 0)
				q = true;
			if (q == true)
				sum += array[i];
		}
	}
	return sum;
}