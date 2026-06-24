#include<iostream>//last occurance.

int main(){

int arr[6] = {4,2,7,2,9,2};
int n = 6;
int target = 2;

for(int i = 0; i < n/2; i++){ // we reverse the array first.
  int temp = arr[i];
  arr[i] = arr[(n-1)-i];   // i made a silly mistake here, i wrote [n-i] instead of[(n-1)-i], this considered 6th index and there is no 6th index.
  arr[(n-1)-i] = temp;
}
for(int i = 0; i < n;i++){
  std::cout << arr[i] << " ";
}

for(int i = 0; i < n; i++){ //then we find the first occurance.
  if(target == arr[i]){
    std::cout << "The last occurance of " << target << " exists at index : " << (n-1) - i; //then we find the index using this formula which i made.
    break; //the reversed array index was from i, from the pattern in my rough work we can see this
  }     // 0->5
        // 1->4     we can notice from pattern (left = reversed array index, right = original array)
}       // 2->3     5 - 0 = 0, 5 - 1 = 4,  5 - 3 = 2, 5- 4 = 1, 5 - 5 = 0
        // 3->2     therefore, (n-1) - i = reversed array index.
        // 4->1
        // 5-> 0
  return 0;
}