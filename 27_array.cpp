#include<iostream>//bubble sort
int main(){

int arr[4] = {5,3,8,1};
int n = 4;
for(int j = 0; j < (n-1); j++){  // i initially couldnt figure out how to "pass", but it was just a simple loop
 for(int i = 0; i < (n); i++){
  if(arr[i] > arr[i+1]){         // bubble sort -> 5 3 8 1  (take 1st and 2nd element), if 1st > 2nd, swap, else no swap
    int temp = arr[i];           //3 5 8 1 (now 2nd and 3rd), 5 > 8? no, so no swap, then (3rd and 4th), 8 > 1, yes so swap.
    arr[i] = arr[i+1];           // 3 5 1 8 (3 < 5, ns), (5 > 1, s) -> 3 1 5 8 (5 > 8? no, ns)
    arr[i+1] = temp;            // 3 1 5 8 (3 > 1, yes, s)-> 1 3 5 8, (3>5, no, ns), (5>8, no, ns)
  }
}                              // initial confusion, how many phase/pass to give, just give n-1, ez.
}
for(int i = 0; i < n; i++){
  std::cout << arr[i] << " ";
}
  return 0;
}