#include<iostream>

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << input[i] << " ";
	}
}

void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void SequntialSort(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (input[i] > input[j])
			{
				Swap(input[i], input[j]);
			}
		}
	}
}


int main()
{
	int array[5]{ 8,7,2,3,1 };

	SequntialSort(array, 5);

	PrintArray(array, 5);

}