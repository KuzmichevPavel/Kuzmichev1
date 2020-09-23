#include"library.h"
#include"function.h"

float* Input_array(float* array, int size)
{// ввод элементов вручную
	cout << "Enter array elements: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "element [ " << i << "]: " << endl;
		cin >> array[i]; // cin >> *(array+i);
	}

	return array;
}