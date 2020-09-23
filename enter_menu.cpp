#include"library.h"
#include"function.h"

int enter_menu()
{
	setlocale(LC_ALL, "Rus");

	char choice_sem;
	while (true)
	{
		while (true)
		{
			cin >> choice_sem;
			if (choice_sem < '1' || choice_sem > '3')
			{
				cout << "Wrong semester chosen!" << endl;
			}
			else
				break;
		}

		switch (choice_sem)
		{
		case '1':
			enter_seminar3();
			break;
		case '2':
			enter_seminar4();
			break;
		case '3':
			enter_seminar_5();
			break;
		default:
			break;
		}

		char y;
		cout << "Enter - 'y' to go to the semester selection menu" << endl;
		cout << "Enter any key to exit!" << endl;
		cin >> y;
		if (y != 'y')
		{
			break;
		}
		else
		{
			system("cls");
			menu_choice();
		}
	}
	return choice_sem;
}