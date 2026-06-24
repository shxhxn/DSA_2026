#include<iostream>// finding second largest element in an array.
int main(){

int arr[5] = {5,8,2,9,7};
int a = 0;
int b = 0;
int index = 0;
int size = 5;

for(int i = 0; i < 5; i++){
  if(a<arr[i]){
    a = arr[i];
    index = i;
  }
}
std::cout << "1st largest = " << a;
std::cout << "\nindex of largest element =" << index << "\n";

if(index!=-1){
for(int j = index; j < 5-1; j++){
  arr[j] = arr[j+1];
}
size--;
}

for(int i = 0; i<size; i++){
  std::cout<< " " << arr[i] << " ";
}

for(int i = 0; i <=size; i++){
  if(b < arr[i]){
    b = arr[i];
  }
}
std::cout << "\n2nd largest = " << b;


  return 0;
}