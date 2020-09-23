#include"library.h"
#include"function.h"

int** delete_zero_matrix(int** arr, int size1, int size2)
{// удаление нулевых строки или столбцов со смешением
	int temp;
	for (int i = 0; i < size1; i++)
	{
		temp = 0;
		for (int j = 0; j < size2; j++)
			if (arr[i][j] != 0)
				temp = 1;
		if (temp == 0)
		{
			for (int y = i; y < size1 - 1; y++)
				for (int j = 0; j < size2; j++)
					arr[y][j] = arr[y + 1][j];
			size1--; i--;
		}
	}
	for (int i = 0; i < size2; i++)
	{
		temp = 0;
		for (int j = 0; j < size1; j++)
			if (arr[j][i] != 0)
				temp = 1;
		if (temp == 0)
		{
			for (int y = i; y < size2 - 1; y++)
				for (int j = 0; j < size1; j++)
					arr[j][y] = arr[j][y + 1];
			size2--; i--;
		}
	}

	cout << endl << "Matrix after transformations" << endl;

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << arr[i][j] << "|" << "  ";
		}
		cout << endl;
	}

	return arr;

}