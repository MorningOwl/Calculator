#include <iostream>
#include <cmath>

using namespace std;

double logbase(int num, int base)
{ return log10(num) / log10(base); }


int main()
{
	int det;
	double num1, num2;

	while (true)
	{
		while (true)
		{
			cout << "What type of operation would you like to perform?\n\n";
			cout << "1.Basic\n2.Scientific\n3.Exit\n\n";
			cin >> det;
			system("cls");
			if (det == 3) return 0;
			if (det == 1 || det == 2) break;
		}

		switch (det)
		{
			case 1:
				while (true)
				{
					cout << "Choose an operation:\n\n";
					cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Back\n\n";
					cin >> det;
					system("cls");
					if (det == 1 || det == 2 || det == 3 || det == 4 || det == 5) break;
				}

				if (det != 5)
				{
					cout << "Enter the first number: ";
					cin >> num1;
					cout << "Enter the second number: ";
					cin >> num2;
					cout << endl;

					switch (det)
					{
					case 1: cout << num1 + num2; break;
					case 2: cout << num1 - num2; break;
					case 3: cout << num1 * num2; break;
					case 4: cout << num1 / num2; break;
					}

					cout << "\n\n";
					system("pause");
					system("cls");
				}
				break;

			case 2:
				while (true)
				{
					cout << "Choose an operation\n\n";
					cout << "1.Square\n2.Square root\n3.Exponential\n4.Logarithm\n5.Back\n\n";
					cin >> det;
					system("cls");
					if (det == 1 || det == 2 || det == 3 || det == 4 || det == 5) break;
				}

				switch (det)
				{
					case 1:
						cout << "Enter the number: ";
						cin >> num1;
						cout << "The square is " << num1 * num1 << "\n\n";
						break;

					case 2:
						cout << "Enter the number: ";
						cin >> num1;
						cout << "The square root is " << sqrt(num1) << "\n\n";
						break;

					case 3:
						cout << "Enter the base number: ";
						cin >> num1;
						cout << "Enter the exponent: ";
						cin >> num2;
						cout << "The result is " << pow(num1, num2) << "\n\n";
						break;

					case 4:
						cout << "Enter the number: ";
						cin >> num1;
						cout << "Enter the logarithm base: ";
						cin >> num2;
						cout << "The result is " << logbase(num1, num2) << "\n\n";
						break;
				}

				system("pause");
				system("cls");
		}
	}
}