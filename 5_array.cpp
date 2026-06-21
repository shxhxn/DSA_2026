#include<iostream>
int main(){

  int arr[7] = {5,3,7,1,3,5,9};
  
  int a = arr[0];
  
   
  for(int i = 0; i < 7; i++){
    if(a > arr[i]){
      a = arr[i];
    }
    }

    std::cout << "The minimum number of the array is : " << a;

  

  return 0;
}