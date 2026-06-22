#include<iostream>
int main(){

  int arr[5] = {5,8,2,9,7};
  int size = 5;
  int a = 0;
  int b = 0;
  int index = 0;

  for(int i = 0; i < size; i++){
    if(a < arr[i]){
      a = arr[i];
      index = i;
    }
  }
  std::cout << "The 1st largest element in the array = " << a;
  std::cout << "\nThe index of the 1st largest element in the array = " << index;

  // we have successfully managed to find the first largest element of the array. which is stored in a.
  //now we need to remove that element from our array and then find the largest agaim, which will be the second largest.
  // we will do so by shifing the largest element towards right or the element beside largest towards left.
  //ok, so correction, largest is NOT shifted, it is replaced by the element beside it, if arr = 5 8 9 2 7 then
  //below loop start from index 2, arr[2] = arr[3], so arr = 5 8 2 2 7, next arr[3] = arr[4], therefore arr = 5 8 2 7 7
  // then we reduce size and then print.

  if(index != -1){
    for(int i = index; i < size-1; i++){
      arr[i] = arr[i+1];
    }
    size--;
  }

  for(int i = 0; i < size; i++){
    if(b < arr[i]){
      b = arr[i];
    }
  }
  std::cout << "\n The second largest element in the array is : " << b;
  return 0;
}