#include<iostream>
int main(){

int arr[4] = {3,2,2,3};
int val = 3;
int n = 4;
int size = 4;


for(int i = 0; i < n-1; i++){  // initially the loop was till n only, but if 3 is alr in the last place then we dont need to run the loop till there
  if(arr[i] == val){ // if 3 is before that, THEN we need to move it to the last position., size-- = wnv we find 3, size-- so that we can obtain array without 3. 
    for(int j = i; j < n-1; j++){//n-1 here for the same reason as before.
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;  
    }        // obviously there is a bug in this too, i cant do ts, im commiting it anyway
    size--;
  }
}
for(int i = 0; i < size; i++){
  std::cout << arr[i] << " ";

}
std::cout << "\nsize = " << size;

  return 0;
}