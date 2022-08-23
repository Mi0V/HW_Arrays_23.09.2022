#include <iostream>
//#define TASK_0
//#define TASK_1_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
int main()
{
#ifdef TASK_0
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	/*arr[2] = 123;Обращени к элементу на запись*/
	//std::cout << arr[2] << std::endl обращение на чтение;
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";

	}
	std::cout << std::endl;
#endif // TASK_0
#ifdef TASK_1_2
	const int size = 3;
	int arr[size];
	std::cout << "Enter element in the massive: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "(" << i + 1 << "): " ;
		std::cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
#endif // TASK_2
#ifdef TASK_3
	const int SIZE = 3;
	int arr[SIZE];
	std::cout << "elements Input array, they will be highlighted in reverse order:" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "(" << i + 1 << "): ";
		std::cin >> arr[i];

	}
	for (int i = SIZE - 1; i >= 0; i--)
	{
		std::cout << arr[i] << std::endl;
	}
#endif // TASK_3
#ifdef TASK_4
	const int SIZE = 3;
	int arr[SIZE];
	int n = 0;
	std::cout << "Enter element in the massive: " << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "(" << i + 1 << "): "; std::cin >> arr[i];
		n += arr[i];
	}
	std::cout << n << std::endl;
#endif // TASK_4
#ifdef TASK_5
	const int SIZE = 3;
	int arr[SIZE];
	double n = 0;
	std::cout << "Enter element in the massive: " << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "(" << i + 1 << "): "; std::cin >> arr[i];
		n += arr[i];
	}
	std::cout << n / 3 << std::endl;
#endif // TASK_5
#ifdef TASK_6
	const int SIZE = 3;
	int arr[SIZE];
	int n = 0;
	char choice;
	std::cout << "Enter " << "+ " << "if you want the largest number and " << "- " << "if you want the smallest : ";
	std::cin >> choice;
	std::cout << "Enter element in the massive: " << std::endl;
	if (choice == '+')
	{
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << "(" << i + 1 << "): "; std::cin >> arr[i];
			(n < arr[i]) ? n = arr[i] : n = n; //странная конструкция n = n т.к. почему-то cout не видело, а скипнуть else  надо было.

		}
		std::cout << n;
	}
	else
	{
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << "(" << i + 1 << "): "; std::cin >> arr[i];
			(i == 0) ? n = arr[i] : n = n;
			(n > arr[i]) ? n = arr[i] : n = n;

		}
		std::cout << n;
	}
#endif // TASK_6


}