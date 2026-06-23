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


// okay, so I solved this dsa question with a different understanding which was totally wrong, now that I have manually written the loop work which happens, I understand it now, its a lil complex this sort

// here we only swap if i < j right?
// so initially we have 1 < 1, so if wont work
// then we have 1 < 5, yes this is the case so 1 will swap 5 so array becomes
// 5 1 3 7
// so now next step is arr[i] = 5
// i < j, 5 < 3, no so no swap
// 5 1 3 7 array
// arr[i] is still 5, i < j, 5 < 7, no, no swap
// array still 5 1 3 7
// now i = 1 so arr[1] = 1
// i < j, 1 < 5, yes so swap
// 1 5 3 7 is new array
// i = 5 now since swap
// j = 5 so no swap
// arr[i] = 5, arr[j] = 3
// 5 < 3, no swap
// 1 5 3 7, remains
// arr[i] = 5, arr[j] = 7
// 5 < 7, swap
// new array = 1 7 3 5
// new i = arr[i] = 3
// 1 < 3 yes, swap
// 3 7 1 5
// 1 < 3, yes, swap
// 1 7 3 5
// 3 < 7, yes, swap
// 1 3 7 5
// 7 < 5, no swap

// array is 1 3 7 5
// last i = arr[i] = 5
// 5 < 1, no swap
// 1 3 7 5
// 5 < 3
// no swap
// 1 3 7 5
// 5 < 7 yes, swap
// 1 3 5 7
// 7 < 7, no, no swap
// there fore sorted

// # What Actually Happens

// The mistake was assuming that `arr[i]` keeps its old value after a swap.

// When this executes:

// ```cpp
// int temp = arr[i];
// arr[i] = arr[j];
// arr[j] = temp;
// ```

// the array changes immediately.

// Example:

// Initial:

// 1 5 3 7

// i = 0, j = 1

// Condition:

// 1 < 5

// True.

// Swap:

// 5 1 3 7

// Now:

// * i is still 0.
// * j becomes 2.
// * arr[0] is now 5.

// The next comparison is:

// 5 < 3

// which is false.

// Then:

// 5 < 7

// which is true.

// Swap:

// 7 1 3 5

// The important realization:

// ```cpp
// arr[i]
// ```

// does not mean:

// "the value i started with."

// It means:

// "the value currently stored at index i."

// Every swap changes the array immediately, so future comparisons use the new values.

// Another important distinction:

// ```cpp
// if(i < j)
// ```

// compares indices.

// ```cpp
// if(arr[i] < arr[j])
// ```

// compares the values stored in the array.

// The exercise of manually tracing every comparison and swap was valuable because it exposed the exact misconception about how array elements change during sorting.

