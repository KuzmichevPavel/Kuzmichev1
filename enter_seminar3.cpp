#include"library.h"
#include"function.h"

void enter_seminar3()
{
	setlocale(LC_ALL, "Rus");
	system("cls");
	int size = 0,peremennai;
	const int N = 50;
	cout << "Enter the dimension of the array (from 0 to 50): "<< endl;
	cin >> size;
	cout << endl;

	while (true)
	{
		if (size <= 0 || size > N)
		{
			system("cls");
			cout << "Dimension is incorrect" << endl;
			cout << "Enter the dimension of the array (from 0 to 50): "<< endl;
			cin >> size;
		}
		else
			break;
	}

	char action_select;
	float* array = new float[size];
	Input_array(array, size);
	
	system("cls");

	while (true)
	{
		while (true)
		{
			menu_seminar3();
			cin >> action_select;
			if (action_select < '1' || action_select > '3')
			{
				system("cls");
				cout << "Incorrect value!" << endl;
			}
			else
				break;
		}
		system("cls");
		Output_array(array, size);
		switch (action_select)
		{
		case '1':
			peremennai= max_number_array(array, size);
			cout << endl << "Maximum element index: " << (max_number_array(array, size))+1 << " element :" << array[peremennai] << endl;
			break;
		case '2':
			cout << "Sum of array elements located after the first positive element: " << sum_max_elements(array, size) << endl; ;
			break;
		case '3':
			rotate_array(array, size);
			break;
		}
		char y;
		cout << endl << "Press - 'y' to go to Semen 3 menu" << endl;
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
	delete[]array;
}