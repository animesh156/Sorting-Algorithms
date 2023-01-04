#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[min_index] > arr[j])
        min_index = j;
    }

    swap(arr[min_index], arr[i]);
  }
}

void printArray(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main()
{

  int arr[] = {6, 3, 9, 23, 5, 1, 7};
  int n = sizeof(arr) / sizeof(int);

  cout << "unsorted array: ";

  printArray(arr, n);

  selectionSort(arr, n);

  cout << "sorted array: ";

  printArray(arr, n);

  return 0;
}
