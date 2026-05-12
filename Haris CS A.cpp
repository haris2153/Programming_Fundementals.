#include <iostream>
using namespace std;
// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) 
{
    int comparison_count = 0;
	for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            comparison_count++;   // Counting comparison
            if (arr[j] > arr[j + 1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	cout << "Bubble Sort Result:"<<endl;
    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	cout << "\nTotal Comparisons: " << comparison_count << endl << endl;
}
// Function to perform Selection Sort
void selectionSort(int arr[], int n) 
{
    int comparison_count = 0;
	for (int i = 0; i < n - 1; i++) 
	{
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
		{
            comparison_count++;   // Counting comparison
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
	cout << "Selection Sort Result:"<<endl;
    cout << "Sorted List: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	cout << endl << "Total Comparisons: " << comparison_count << endl;
}
int main() 
{
    int arr1[] = {64, 25, 12, 22, 11};
    int arr2[] = {64, 25, 12, 22, 11};
    int n = 5;

    bubbleSort(arr1, n);
    selectionSort(arr2, n);

    return 0;
}
