#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int swapCount = 0;
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) { // round
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (swapped == false) {
      break;
    }
  }
  cout << "Final ";
  printArr(arr, 5);
  cout << endl;
}
int main() {
  int arr[] = {55, 17, 100, 1, 11};
  cout << "Original ";
  printArr(arr, 5);
  cout << endl;
  bubbleSort(arr, 5);
  return 0;
}