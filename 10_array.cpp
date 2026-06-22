#include<iostream> // finding index of a number
int main(){

  int arr[10] = {5,8,1,2,3,0,6,11,54,21};

  int a;
  std::cout << "Enter the element of array u want to find the index of: ";
  std::cin >> a;

  int b = 0;
  for(int i = 0; i < 11; i++){
    if(arr[i]==a){
      b = i;
    }
  }
  std::cout << "index :" << b;



  return 0;
}