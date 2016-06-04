#include <iostream>

using namespace std;

int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int index = low;
	for (int i = low;i < high;i++)
	{
		if (a[i] < pivot)
		{
			swap(a[i], a[index]);
			index++;
		}
	}

	swap(a[index], a[high]);
	return index;
}
void quicksort(int a[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition(a, low, high);
		quicksort(a, low, pivot - 1);
		quicksort(a, pivot + 1, high);
	}
}

int main() {
	int arr[] = { 5,3,2,1,7,9,2 };
	int high = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, high - 1);
	for (auto a : arr)
		cout << a;
	return 0;
}
