#include <iostream>

using namespace std;


int main()
{
	int det, num1, num2;

	while (true)
	{
		while (true)
		{
			cout << "What operation would you like to perform?\n\n";
			cout << "1.Addition\n2.Subtraction\n3.Exit\n\n";
			cin >> det;
			system("cls");
			if (det == 3) return 0;
			if (det == 1 || det == 2) break;
		}

		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
		cout << endl;

		switch (det)
		{
			case 1: cout << num1 + num2; break;
			case 2: cout << num1 - num2; break;
		}

		cout << "\n\n";
		system("pause");
		system("cls");
	}
}