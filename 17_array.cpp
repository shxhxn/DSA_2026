#include<iostream> // left rotate by one
int main(){

int arr[5] = {1,2,3,4,5};

for(int i = 0; i < 4; i++){
  int temp = arr[i];
  arr[i] = arr[i+1];
  arr[i+1] = temp;
}

for(int i = 0; i < 5; i++){
  std::cout << arr[i];
}
  return 0;
}