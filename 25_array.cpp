#include<iostream>//palindrome check in array.
int main(){

int arr[5] = {1, 2, 3, 2, 1};
int n = 5;    // wse will be using two pointer technique only.
int point = 0;
for(int i = 0; i < n/2; i++){
  if(arr[i] == arr[(n-1)-i]){
    point++;
  }
}   // we be using point system cuz if an array IS a palindrome, the elements which will be equal is n/2 only.
if(point == n/2){
  std::cout << "Palindrome.";
}
else{
  std::cout << "Not a Palindrome.";
}

  return 0;
}