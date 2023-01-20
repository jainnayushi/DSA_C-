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

int peakMountain(int arr[], int size) {
  int start=0;
    int end=size-1;
    int mid;
    while(start<end){ // 1. not start<=end
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){ //left line
            start=mid+1;
        }else{ // peak or right side
            end=mid; // 2. if this mid is peak =>mid-1 karke peak miss ho jaata
        }
    }
    return start; //3. return start
}
int main() {
  int arr[7] = {3, 4, 5,8, 9,2,0};
  int x = peakMountain(arr, 7);
  printArr(arr, 7);
  cout  <<x<<" index"<<endl;
  cout  <<arr[x]<<" is the peak"<<endl;
  return 0;
}