#include"library.h"
#include"function.h"

void enter_seminar4()
{
	system("cls");
	int size1, size2;
	const int N = 50;
	cout << "Enter the dimension of the matrix (Up to 50): ";
	cin >> size1;
	cout << "Enter the dimension of the matrix (Up to 50): ";
	cin >> size2;
	cout << endl;

	while (true)
	{
		if ((size1 <= 0 || size1 > N) && (size2 <= 0 || size2 > N))
		{
			system("cls");
			cout << "Enter the dimension of the matrix (Up to 50): ";
			cin >> size1;
			cout << "Enter the dimension of the matrix (Up to 50): ";
			cin >> size2;
		}
		else
			break;
	}

	char action_select;
	int** arr = new int* [size1];
	for (int i = 0; i < size1; i++)
		arr[i] = new int[size2];
	Input_array_matrix(arr, size1, size2);


	while (true)
	{
		while (true)
		{
			menu_seminar4();
			cin >> action_select;

			if (action_select < '1' || action_select > '3')
			{
				cout << endl <<"I chose the wrong semester!" << endl;
			}
			else
				break;
		}
		system("cls");
		cout << endl << "Matrix: "<< endl;
		Output_array_matrix(arr, size1, size2);
		switch (action_select)
		{
		case '1':
			delete_zero_matrix(arr, size1, size2);
			break;
		case '2':
			number_positive(arr, size1, size2);
			break;
		}
		char y;
		cout << endl << "Press - 'y' to go to Semen 4 menu" << endl;
		cout << "Press any button to go to the main menu" << endl;
		cin >> y;
		if (y != 'y')
		{
			break;
		}
		else
		{
			system("cls");
		}
	}

	for (int i = 0; i < size1; i++)
		delete arr[i];
	delete[]arr;
}