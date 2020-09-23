#include"library.h"
#include"function.h"

void enter_seminar_5()
{
	system("cls");

	int d = 0, quest = 0;
	string path = "test.txt", str;;
	ifstream fin;
	cout << "File search." << endl;
	Sleep(400);
	system("cls");
	cout << "File search.." << endl;
	Sleep(400);
	system("cls");
	cout << "File search..." << endl;
	Sleep(400);
	system("cls");

	fin.open("test.txt");
	if (!fin.is_open())
	{
		cout << "File not found! Place the source file in your project folder!" << endl;
		d = 5;
	}
	else
	{
		cout << "File open. " << endl << endl;

		while (!fin.eof())
		{
			getline(fin, str);
			cout << str << endl;
		}

		cout << endl << "Displays sentences starting with - :" << endl << endl;
		fin.seekg(0, ios::end);
		long len = fin.tellg();
		char* buf = new char[len + 1];
		fin.seekg(0, ios::beg);
		fin.read(buf, len);
		buf[len] = '\0';
		long i = 0;
		do
		{
			if ((buf[i] == '-' && buf[i - 1] == ' ') || buf[i] == '-')
			{
				do {
					cout << buf[i];
					i++;
				} while (!(buf[i - 1] == '.' || buf[i - 1] == '!' || buf[i - 1] == '?' || buf[i] == '\n' || buf[i] == '\t'));
				cout << endl;
			}
			i++;
		} while (!(buf[i] == '\0'));
		cout << endl;
		delete[]buf;
	}
	fin.close();
}

/*//#pragma warning(disable : 4996)
#include"library.h"
#include"function.h"

void enter_seminar_5()
{
	system("cls");

	FILE* fin = fopen("test.txt", "r");
	if (!fin)
		cout << "File not found! Place the source file in your project folder!" << endl; // вывод слова не открылся 
	fseek(fin, 0, SEEK_END);
	int len = ftell(fin);
	if (!len)
		cout << "File is empty!" << endl;
	else
	{
		char* buf = new char[len + 1];
		fseek(fin, 0, SEEK_SET);

		char* word;
		while (fgets(buf, len + 1, fin) != NULL)
		{
			word = strtok(buf, " -");
			while (word != NULL) {
				if (strchr(" ", word[0]))
					puts(word);
				word = strtok(NULL, ".!?;\n\t");
			}
		}
		delete[] buf;
	}
	fclose(fin);
}
*/