#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	/*
	srand(time(NULL));
	int a;
	a = rand() % 10 + 1;

	std::cout << a;
	*/
	const int size = 10;
	int arr[size]{};
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 29 - 15;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 8;  8; 8; 6; 2;
	std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
	arr[i] = rand() % -3 - 3 - 15 - 9 - 5;
	std::cout << arr[i] << " ";
	}

	return 0;
}