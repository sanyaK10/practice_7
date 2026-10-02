#include <iostream>
using namespace std;
int main()
{
	//number 1
	int a[5] = { 5, 2, 8, 1, 3 };
	for (int i = 0; i < 5; i++)
	{
		int min = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}




	//number 2
	const int size = 10;
	int arr[size];
	int choice;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter mark: ";
		cin >> arr[i];
	}
	cout << "Menu: 1 if you want to see marks, 2 if you want to change one mark, 3 count can you have scholarship: ";
	cin >> choice;
	switch (choice) {
	case 1:
		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << " ";
		}
		break;
	case 2:
		int index, newmark;
		cout << "Enter index of mark to change (0-9): ";
		cin >> index;
		cout << "Enter new mark: ";
		cin >> newmark;
		arr[index] = newmark;
		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << " ";
		}
		break;
	case 3:
		int total = 0;
		for (int i = 0; i < size; ++i)
		{
			total += arr[i];
		}
		if (total / size >= 10.7)
		{
			cout << "You can have scholarship!";
		}
		else
		{
			cout << "You can't have scholarship!";
		}
		break;
	}

	//number 3

}