#include<iostream>//first occurance
int main(){

int arr[6] = {4,2,7,2,9,2};
int n = 6;
int target = 2;
int index = 0;

for(int i = 0; i < n; i++){
  if(target == arr[i]){
    index = i;
    break;
  }
}
std::cout << "The first occurance of " << target << " is in index : " << index;

  return 0;
}