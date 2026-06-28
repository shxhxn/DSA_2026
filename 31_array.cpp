#include<iostream> // Search index position, basically, target in array, return index, if not, then return the index where the target would be put in
int main(){ // so that the whole array will be in order.

int arr[4] = {1,3,5,6};
int n = 4;
int target = 2;
int insert_index = 0;

for(int i = 0; i < n; i++){
  if(arr[i] == target){
    std::cout << i;      // initially I had trouble actually understanding all the question only
    return 0;           // I had lil trouble with the result and I understood the problem only after watching soln instead of thinking :<
  }
  else if(target > arr[i]){
    insert_index = i+1;
  }
}
std::cout << "insert index = " << insert_index;

  return 0;
}