#include<iostream>// counting duplicates.
int main(){

int arr[10] = {4, 7, 2, 7, 9, 7, 1, 4, 7, 5};
int target = 7;
int n = 10;
int count = 0;
for(int i = 0; i < n; i++){
  if(target == arr[i]){
    count++;
  }
}
std::cout << "no. of dupes = " << count;

  return 0;
}