#include<iostream>

int sumTo(int value)
{
	int sum{0};
	for (int i{1}; i <= value; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int value;
	setlocale(LC_ALL, "");
	std::cout << "¬ведите число: ";
	std::cin >> value;
	std::cout<<"—умма перечисленных чисел: " << sumTo(value);
}