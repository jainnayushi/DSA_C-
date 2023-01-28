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

  void merge(int nums1[], int m, int nums2[], int n) {
        int i=m-1,j=n-1;
        int ind=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[ind]=nums1[i];
                i--;
            }
            else
            {
                nums1[ind]=nums2[j];
                j--;
            }
            ind--;
        }
        while(i>=0)
        {
            nums1[ind]=nums1[i];
            i--;
            ind--;
        }
        while(j>=0)
        {
            nums1[ind]=nums2[j];
            j--;
            ind--;
        }
    }
int main() {
  int arr1[6] = {1,2,3,0,0,0};
  int arr2[3] = {2,5,6};
  int arr3[8] = {0};
  merge(arr1, 6, arr2, 3);
  printArr(arr1, 9);
  return 0;
}
