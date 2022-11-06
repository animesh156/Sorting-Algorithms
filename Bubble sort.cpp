#include <bits/stdc++.h>
using namespace std;

// A function for bubble sort

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// function to print sorted array

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int a[] = {13, 46, 24, 52, 20, 9};

    int n = sizeof(a) / sizeof(a[0]);

    bubbleSort(a, n);
    printarray(a, n);

    return 0;
}
