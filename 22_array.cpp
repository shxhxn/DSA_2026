#include<iostream> // smallest and largest together
int main(){    // this is actually the same as prev q, but I was commended by someone on this q because I optimized it
             // arr[0], single traversal, two result, fewer iteration
int arr[8] = {14, 3, 27, 8, 1, 19, 42, 6};
int n = 8;
int largest = arr[0];
int smallest = arr[0];

for(int i = 0; i < n ; i++){
  if(largest < arr[i]){
    largest = arr[i];
  }
  if(smallest > arr[i]){
    smallest = arr[i];
  }
}

std::cout << "The largest element is : " << largest;
std::cout << "\nThe smallest element is : " << smallest;

  return 0;
}