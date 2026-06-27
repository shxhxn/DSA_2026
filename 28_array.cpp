#include<iostream>// selection sort -> loop starts with 1st element, it finds the smallest from the remaining and swaps with it.
int main(){

int arr[5] = {5,3,8,1,4};
int n = 5;


for(int i = 0; i < n; i++){    // loop for selecting the first element and the further ones
  int smallest = arr[i];
  for(int j = i; j < n; j++){  // loop for finding the smallest element.   j = i is basically helping us to not start the smallest no. finder loop all the way from the start
    if(smallest > arr[j]){
      smallest = arr[j];
    }
  }
  if(arr[i] > smallest){
    int temp = arr[i];        // ill fix it later, alr took 2 hours
    arr[i] = arr[smallest];
    arr[smallest] = temp;
  }
}



for(int i = 0; i < n; i++){
  std::cout << arr[i] << " ";
}

  return 0;
}