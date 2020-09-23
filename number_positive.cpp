#include"library.h"
#include"function.h"

int number_positive(int** arr, int size1, int size2)
{// Номер первой положительной строки
	int num = -1;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (num < 0 && arr[i][j] > 0)
			{
				num = i;
			}
		}
	}
	if (num >= 0) {
		cout << "The number of the first line containing at least one positive element = " << num + 1 << endl;
	}
	else {
		cout << "No positive elements in the matrix!";
	}
	return num;

}