#include<iostream>
int main(){

int arr[6] = {0,4,0,7,0,2};
int zero = 0;

for(int i = 0; i < 6; i++){
  if(arr[i] == 0){
    zero++;
  }
}
std::cout << "The number of zeroes in the array = " << zero;

  return 0;
}