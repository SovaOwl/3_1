#include <iostream>

using namespace std;

class Calculator
{
private:
	int num1 = -999;
	int num2 = -999;

public:
	int nume1 = num1;
	int	nume2 = num2;

	double add()
	{
		return nume1 + nume2;
	}
	double multiply()
	{
		return nume1 * nume2;
	}
	double subtract_1_2()
	{
		return nume1 - nume2;
	}
	double subtract_2_1()
	{
		return nume2 - nume1;
	}
	double divide_1_2()
	{
		return nume1 / nume2;
	}
	double divide_2_1()
	{
		return nume2 / nume1;
	}
	bool set_num1(double nume1)
	{
		if (nume1 != 0)
		{
			this->nume1 = nume1;
			return true;
		}
		else
		{
			return false;
		}
	}
	bool set_num2(double nume2)
	{
		if (nume2 != 0)
		{
			this->nume2 = nume2;
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

		calc.nume1 = input1;
		calc.nume2 = input2;

		print_calculator(calc, input1, input2);
	}
}
