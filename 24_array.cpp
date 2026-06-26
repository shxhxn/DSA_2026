#include<iostream>//reversing an array using two pointer
int main(){   // i have alr done it without knowing the term two pointer, but ill do it again

int arr[6] = {0,1,2,3,4,5};
int n = 6;

for(int i = 0; i < n/2; i++){
  int temp = arr[i];           // mistake which I have been repeating : ever since I have started using n = 6 etc, I am forgetting about the fact
  arr[i] = arr[(n-1)-i];  // that n = 6, and I have 5 elements in total, n - i (6-0 = 6, therefore code doesnt work so as to get what i need for result.)
  arr[(n-1)-i] = temp;
}

for(int i = 0; i < n; i++){
  std::cout << arr[i] << " ";
}

  return 0;
}