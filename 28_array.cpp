#include<iostream>// selection sort -> loop starts with 1st element, it finds the smallest from the remaining and swaps with it.
int main(){

int arr[5] = {5,3,8,1,4};
int n = 5;


for(int i = 0; i < n; i++){    // loop for selecting the first element and the further ones
  int smallest = i;
  for(int j = i; j < n; j++){  // loop for finding the smallest element.   j = i is basically helping us to not start the smallest no. finder loop all the way from the start
    if(arr[smallest] > arr[j]){
      smallest = j;
    }
  }
  if(arr[i] > arr[smallest]){
    int temp = arr[i];        // ill fix it later, alr took 2 hours,
    arr[i] = arr[smallest];
    arr[smallest] = temp;   // FIXED LESGOOO, I MADE MISTAKE OF smallest = arr[j] and using smallest instead of arr[smallest]
  }
}



for(int i = 0; i < n; i++){
  std::cout << arr[i] << " ";
}

  return 0;
}