#include<iostream> // count the number of even numbers
int main(){

  int arr[7] = {4,6,5,3,1,2,9};
  int a = 0;

  for(int i = 0; i < 7; i++){
    if(arr[i] % 2 == 0){
      a++;
    }
  }

  std::cout << "The number of even numbers in the array is : " << a;
  return 0;
}