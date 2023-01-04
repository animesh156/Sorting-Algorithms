#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int temp = arr[i];
    int j = i - 1;

    for (; j >= 0; j--)
    {
      if (arr[j] > temp)
      {
        arr[j + 1] = arr[j];
      }
      else
      {
        break;
      }
    }

    arr[j + 1] = temp;
  }
}

void printArray(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[] = {6, 2, 9, 4, 1, 8};
  int n = sizeof(arr) / sizeof(int);

  cout << "Unsorted array: ";

  printArray(arr, n);

  insertionSort(arr, n);

  cout << "Sorted array: ";

  printArray(arr, n);

  return 0;
}
