#include<iostream>//two sum
int main(){

int arr[4] = {2,7,11,15};
int target = 9;
int n = 4;
int index1 = 0;
int index2 = 0;

for(int i = 0; i < n; i++){
  for(int j = i+1; j < n; j++){
    if(arr[i] + arr[j] == target){
      index1 = i;
      index2 = j;
    }
  }
}
std::cout << index1 << " " << index2;

  return 0;
}