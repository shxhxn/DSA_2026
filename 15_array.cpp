#include<iostream>//checking if array is sorted
int main(){

int arr[5] = {1,2,3,4,5};
int size = 0;

for(int i = 0; i < 5-1; i++){
  if(arr[i] < arr[i+1]){
    size++;
  }
}
if(size==4){
  std::cout << "The array is sorted.";
}
else{
  std::cout << "The array is not sorted.";
}

  return 0;
}