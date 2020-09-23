#include"library.h"
#include"function.h"

int** Input_array_matrix(int** arr, int size1, int size2)
{
	for (int i = 0; i < size1; i++)  // заполняем матрицу вручную
	{
		for (int j = 0; j < size2; j++)
		{
			cout << endl <<"Element [ " << i << " ] " << " [ " << j << " ]: ";
			cin >> arr[i][j];
		}
	}
	system("cls");
	return arr;
}