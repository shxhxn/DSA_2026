#include<iostream>
int main(){

  int arr[10] = {3,5,6,2,3,5,4,4,8,1};
  int a;
  int b = 0;
  std::cout<< "Enter the number u want to count : ";
  std::cin >> a;

  for(int i = 0; i <11; i++){
    if(arr[i] == a){
      b++;
    }
  }
  std::cout << "The total number of given element in the array is: " << b;


  return 0;
}