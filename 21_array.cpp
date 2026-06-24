#include<iostream> //find largest and smallest together.
int main(){

int arr[8] = {14, 3, 27, 8, 1, 19, 42, 6};
int n = 8;
int largest = arr[0];  //always use arr[0] instead of "largest = 0"; because what if negative nos. in array.
int smallest = arr[0];

//largest
for(int i = 0; i < n; i++){      // here two loops, so O(2n)
  if(arr[i] > largest){          // fact, O(2n) = O(n), same time complexity.
    largest = arr[i];
  }
}
std::cout << "The largest element in the array is : " << largest;

//smallest
for (int i = 0; i < n; i++)
{
  if(smallest > arr[i]){
    smallest = arr[i];
  }
}
std::cout << "\nThe smallest element in the array is : " << smallest; 



  return 0;
}