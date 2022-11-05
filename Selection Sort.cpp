

#include <iostream>
using namespace std;


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      
      if (array[i] < array[min_idx])
        min_idx = i;
    }

   
    swap(&array[min_idx], &array[step]);
  }
}


int main() {
  int arr[] = {20, 12, 10, 15, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(arr, size);
}
