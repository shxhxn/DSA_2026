#include<iostream>
#include<vector>

int main(){

  int sum = 0;
  int arr[7] = {3,7,1,3,7,5,7};

  for(int i = 0; i < 7; i++){
    sum += arr[i];
  }
  std::cout << "The sum of every element of an array is: " << sum;



  return 0;
}