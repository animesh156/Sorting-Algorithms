#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    bool swapped = false;

    for (int j = 0; j < (n - i - 1); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (swapped = false)
    {
      break;
    }
  }
}

void printArray(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout <<endl;
}
int main()
{
  int arr[] = {6, 2, 9, 4, 1, 8};
  int n = sizeof(arr) / sizeof(int);

  cout << "Unsorted array: ";

  printArray(arr, n);

  bubbleSort(arr, n);

  cout << "Sorted array: ";

  printArray(arr, n);

  return 0;
}
