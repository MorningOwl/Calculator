#include <iostream>

using namespace std;


double logbase(int num, int base)
{ return log10(num) / log10(base); }

int fact(int x)
{ if (x == 1) return 1;return x * fact(x - 1); }

int comb(int n, int r)
{ return fact(n) / (fact(n - r) * fact(r)); }

int perm(int n, int r)
{ return fact(n) / fact(n - r); }


int main()
{
	int det;
	double num1, num2;

	while (true)
	{
		while (true)
		{
			cout << "What type of operation would you like to perform?\n\n";
			cout << "1.Basic\n2.Scientific\n3.Counting\n4.Exit\n\n";
			cin >> det;
			system("cls");
			if (det == 4) return 0;
			if (det == 1 || det == 2 || det == 3) break;
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
						case 4: cout << num1 / num2;
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
						cout << "\nThe square is " << num1 * num1 << "\n\n";
						break;

					case 2:
						cout << "Enter the number: ";
						cin >> num1;
						cout << "\nThe square root is " << sqrt(num1) << "\n\n";
						break;

					case 3:
						cout << "Enter the base number: ";
						cin >> num1;
						cout << "Enter the exponent: ";
						cin >> num2;
						cout << "\nThe result is " << pow(num1, num2) << "\n\n";
						break;

					case 4:
						cout << "Enter the number: ";
						cin >> num1;
						cout << "Enter the logarithm base: ";
						cin >> num2;
						cout << "\nThe result is " << logbase(num1, num2) << "\n\n";
				}

				system("pause");
				system("cls");
				break;

			case 3:
				while (true)
				{
					cout << "Choose an operation:\n\n";
					cout << "1.Factorial\n2.Combination (nCr)\n3.Permutation (nPr)\n4.Back\n\n";
					cin >> det;
					system("cls");
					if (det == 1 || det == 2 || det == 3 || det == 4) break;
				}

				switch (det)
				{
					case 1:
						cout << "Enter a number: ";
						cin >> num1;
						cout << "\nThe factorial is " << fact(num1) << "\n\n";
						break;
						
					case 2:
						cout << "Enter the number of items: ";
						cin >> num1;
						cout << "Enter the number of items to be chosen: ";
						cin >> num2;
						cout << "\nThere are " << comb(num1, num2) << " possible combinations\n\n";
						break;

					case 3:
						cout << "Enter the number of items: ";
						cin >> num1;
						cout << "Enter the number of items to be chosen: ";
						cin >> num2;
						cout << "\nThere are " << perm(num1, num2) << " possible permutations\n\n";
						break;
				}

				system("pause");
				system("cls");
				break;
		}
	}
}