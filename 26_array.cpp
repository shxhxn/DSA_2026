#include<iostream>
int main(){

int arr[10] = {4, 0, 7, 0, 2, 9, 0, 1, 5, 0};
int n = 10;

  for(int i = 0; i < n; i++){
    if(arr[i] == 0){
      for(int j = i; j < n-1; j++){  //tried putting j = i instead of j = 0 since it need to start from non zero element, not from first.
        int temp = arr[j];
        arr[j] = arr[j+1];   // mistake #1 = I am using j + 1, its valid until the last element. so I change j < n to j < n-1.
        arr[j+1] = temp;
      }
       i--;
          }  // part I still dont understand -> i-- and changing temp = arr[i] to temp = arr[j], i am too sleepy rn, gn
  }

for(int i = 0; i < n; i++){
  std::cout << arr[i] << " ";
}

  return 0;
}