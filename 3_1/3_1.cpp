#include <iostream>

using namespace std;

class Calculator
{
public:
	int num1;
	int num2;

	double add()
	{
		return num1 + num2;
	}
	double multiply()
	{
		return num1 * num2;
	}
	double subtract_1_2()
	{
		return num1 - num2;
	}
	double subtract_2_1()
	{
		return num2 - num1;
	}
	double divide_1_2()
	{
		return num1 / num2;
	}
	double divide_2_1()
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

void print_calculator(Calculator& calc, int input1, int input2)
{
	cout << "num1 + num2 = " << calc.add() << endl;
	cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
	cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
	cout << "num1 * num2 = " << calc.multiply() << endl;
	cout << "num1 / num2 = " << calc.divide_1_2() << endl;
	cout << "num2 / num1 = " << calc.divide_2_1() << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	Calculator calc;

	int input1=-999, input2=-999;

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

		calc.num1 = input1;
		calc.num2 = input2;

		print_calculator(calc, input1, input2);
	}
}