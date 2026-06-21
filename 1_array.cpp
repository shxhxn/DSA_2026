#include<iostream> // printing all elements
#include<vector>
int main(){

int arr[7] = {3,6,7,2,4,5,8};

std::cout << "(";
for(int i = 0; i < 7; i++){
  std::cout << arr[i] << ",";
}
std::cout << ")";

  return 0;
}