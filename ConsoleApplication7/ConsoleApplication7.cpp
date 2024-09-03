#include <iostream>

using namespace std;

int FindFactorial(int num)
{
	if (num == 1)
	{
		return 1;
	}

	return num * FindFactorial(num - 1);
}

int AdditionNumber(int num)
{
	if (num == 0)
	{
		return 0;
	}

	return num + AdditionNumber(num - 1);
}

int NumberUst(int num_1, int num_2)
{
	if (num_2 == 1)
	{
		return num_1;
	}
	return num_1 * NumberUst(num_1, num_2 - 1);
}

int main()
{
	cout << "===================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";

	int NumberOne;

	cout << "Enter number : ";
	cin >> NumberOne;

	int AnswerOne = FindFactorial(NumberOne);
	cout << "Answer : " << AnswerOne;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "===================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";

	int NumberTwo;

	cout << "Enter number : ";
	cin >> NumberTwo;

	int AnswerTwo = AdditionNumber(NumberTwo);
	cout << "Answer : " << AnswerTwo;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "===================================";
	cout << "\n\n";
	cout << "Tap - 5";
	cout << "\n\n\n\n";

	int NumbereFive_;
	int NumbereFive;

	cout << "Enter number one : ";
	cin >> NumbereFive;

	cout << "Enter number two : ";
	cin >> NumbereFive_;

	int AnswerFive = NumberUst(NumbereFive, NumbereFive_);
	cout << "Answer : " << AnswerFive;

	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "===================================";
}