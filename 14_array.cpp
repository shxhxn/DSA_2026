#include<iostream>//sorting an array.
int main(){

int arr[4] = {1,5,3,7};

for(int i = 0; i < 4; i++){
  for(int j = 0; j < 4; j++){
    if(arr[i]<arr[j]){     // BRO I WAS USING i < j INSTEADF OF arr[i] < arr[j] TT
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}
for(int i = 0; i < 4;i++){
  std::cout << arr[i] << " ";
}

  return 0;
}