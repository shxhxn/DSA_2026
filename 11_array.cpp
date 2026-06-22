#include<iostream>//count +ve and -ve numbers.
int main(){

  int arr[6] = {-2,5,-7,8,0,-1};
  int positive = 0;
  int negative = 0;
  int zero = 0;

  for(int i = 0; i<7;i++){
    if(arr[i] > 0){
      positive++;
    }
    else if(arr[i] < 0){
      negative++;
    }
    else if(arr[i]==0){
      zero++;
    }
  }
  std::cout << "Number of positive elements = " << positive << "\n";
  std::cout << "Number of negative elements = " << negative << "\n";
  std::cout << "Number of zeroes = " << zero;

  return 0;
}