#include <iostream>

void main()
{
	int indent;
	char choice;
	std::cout << "Enter ""+"" if you want to shift the array to the right and ""-"" if to the left: ";
	std::cin >> choice;
	std::cout << "Enter an indent: ";
	std::cin >> indent;
	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	if (choice == '+')
	{
		for (int i = 0 + SIZE - indent; i < SIZE; i++)
		{
			std::cout << arr[i] << ",";
		}
		for (int i = 0; i < SIZE - indent; i++)
		{
			std::cout << arr[i] << ",";
		}
	}
	else
	{
		for (int i = 0 + indent; i < SIZE; i++)
		{
			std::cout << arr[i] << ",";
		}
		for (int i = 0; i < indent; i++)
		{
			std::cout << arr[i] << ",";
		}
	}

}