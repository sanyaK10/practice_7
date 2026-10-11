#include <iostream>
using namespace std;
void quickSort(int arr[], int left, int right);
int main()
{
	//number 1
	// вибором
	//int a[5] = { 5, 2, 8, 1, 3 };
	//for (int i = 0; i < 5; i++)
	//{
	//	int min = i;
	//	for (int j = i + 1; j < 5; j++)
	//	{
	//		if (a[j] < a[min])
	//		{
	//			min = j;
	//		}
	//	}
	//	int temp = a[i];
	//	a[i] = a[min];
	//	a[min] = temp;
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << a[i] << " ";
	//}

	//вставками
	int a[5] = { 5, 2, 8, 1, 3 };
	for (int i = 1; i < 5; i++) {
		int temp = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}





	//number 2
    //const int SIZE = 10;
    //int arr[SIZE];
    //int choice;
    //for (int i = 0; i < SIZE; i++) {
    //    cout << "Enter mark: ";
    //    cin >> arr[i];
    //}
    //cout << "\nMenu:\n";
    //cout << "1 - Show marks\n";
    //cout << "2 - Change mark\n";
    //cout << "3 - Check scholarship\n";
    //cout << "Your choice: ";
    //cin >> choice;
    //switch (choice) {
    //case 1:
    //    for (int i = 0; i < SIZE; i++) {
    //        cout << arr[i] << " ";
    //    }
    //    break;
    //case 2: {
    //    int index, newmark;
    //    cout << "Enter index (0-9): ";
    //    cin >> index;
    //    if (index >= 0 && index < SIZE) {
    //        cout << "Enter new mark: ";
    //        cin >> newmark;
    //        arr[index] = newmark;
    //        for (int i = 0; i < SIZE; i++) {
    //            cout << arr[i] << " ";
    //        }
    //    }
    //    else {
    //        cout << "Wrong index!";
    //    }
    //    break;
    //}
    //case 3: {
    //    int total = 0;
    //    for (int i = 0; i < SIZE; i++) {
    //        total += arr[i];
    //    }
    //    double average = total / 10.0;
    //    cout << "Average mark: " << average << endl;
    //    if (average >= 10.7) {
    //        cout << "You can have scholarship!";
    //    }
    //    else {
    //        cout << "You can't have scholarship!";
    //    }
    //    break;
    //}
    //default:
    //    cout << "Wrong choice!";
    //}

	//number 3
    //const int SIZE = 8;
    //int arr[SIZE] = { 5, 2, 8, 1, 9, 3, 7, 4 };

    //quickSort(arr, 0, SIZE - 1);

    //for (int i = 0; i < SIZE; i++) {
    //    cout << arr[i] << " ";
    //}


    //number 4
    const int SIZE = 9;
    int arr[SIZE] = { 5, -2, 8, 1, -3, 4, 7, 6, -1 };
    int total = 0;
    for (int i = 0; i < SIZE; i++) {
        total += arr[i];
    }
    double average = (double)total / SIZE;
    int part;
    if (average > 0) {
        part = SIZE * 2 / 3;
    }
    else {
        part = SIZE / 3;
    }
    for (int i = 0; i < part - 1; i++) {
        for (int j = 0; j < part - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int left = part;
    int right = SIZE - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    cout << "Average: " << average << endl;
    cout << "Result: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
}









void quickSort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int middle = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < middle) {
            i++;
        }
        while (arr[j] > middle) {
            j--;
        }
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}