#include<iostream>
#include<vector>

int main(){

int a = 0;
int arr[7] = {3,5,7,9,2,5,5};

for (int i = 0; i < 7; i++){
  if(arr[i] > a){
    a = arr[i];
  }
}
std::cout << "The maximum number is : " << a;


  return 0;
}