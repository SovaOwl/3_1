#include <iostream>

using namespace std;

class Calculator
{
private:
	int num1 = -999;
	int num2 = -999;

public:

	double add(int num1, int num2)
	{
		return num1 + num2;
	}
	double multiply(int num1, int num2)
	{
		return num1 * num2;
	}
	double subtract_1_2(int num1, int num2)
	{
		return num1 - num2;
	}
	double subtract_2_1(int num1, int num2)
	{
		return num2 - num1;
	}
	double divide_1_2(int num1, int num2)
	{
		return num1 / num2;
	}
	double divide_2_1(int num1, int num2)
	{
		return num2 / num1;
	}
	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else
		{
			return false;
		}
	}
	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
		{
			return false;
		}
	}
};

void print_calculator(Calculator calc, int input1, int input2)
{
	cout << "num1 + num2 = " << calc.add(input1, input2) << endl;
	cout << "num1 - num2 = " << calc.subtract_1_2(input1, input2) << endl;
	cout << "num2 - num1 = " << calc.subtract_2_1(input1, input2) << endl;
	cout << "num1 * num2 = " << calc.multiply(input1, input2) << endl;
	cout << "num1 / num2 = " << calc.divide_1_2(input1, input2) << endl;
	cout << "num2 / num1 = " << calc.divide_2_1(input1, input2) << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	Calculator calc;

	int input1 = -999, input2 = -999;

	for (;;)
	{
		cout << "Введите num1: ";
		cin >> input1;

		if (!calc.set_num1(input1))
		{
			do
			{
				cout << "Неверный ввод!" << endl;
				cout << "Введите num1: ";
				cin >> input1;
			} while (calc.set_num1(input1) == false);
		}
		cout << "Введите num2: ";
		cin >> input2;

		if (!calc.set_num1(input2))
		{
			do
			{
				cout << "Неверный ввод!" << endl;
				cout << "Введите num2: ";
				cin >> input2;
			} while (calc.set_num1(input2) == false);
		}

		print_calculator(calc, input1, input2);
	}
}
