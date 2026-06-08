#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 34};
    int max = arr[0];
  for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
  cout << "Maximum Element = " << max;
  return 0;
}
