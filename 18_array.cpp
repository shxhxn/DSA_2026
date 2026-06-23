#include<iostream> // Linear search
int main(){

int arr[8] = {3,5,6,2,9,87,12,23};
int n = 8;
int a;

int c = 0;

std::cout << "Enter the element you want to search for in array : ";
std::cin >> a;


for(int i = 0; i < n; i++){
  if(a == arr[i]){
    std::cout << a << " exists in the array.\n";
    std::cout << "index = " << i;
  }
  else if(a != arr[i]){
    c++;
  }
}
if(c == n){
  std::cout << a << " does not exist in the array.";
}



  return 0;
}