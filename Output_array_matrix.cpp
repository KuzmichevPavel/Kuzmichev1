#include"library.h"
#include"function.h"

int Output_array_matrix(int** arr, int size1, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << arr[i][j] << "|" << "  "; 
		}
		cout << endl;
	}
	cout << endl;
	return size1;
}