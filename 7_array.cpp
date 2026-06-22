#include <iostream>

int main() {
    int arr[7] = {5,7,6,3,12,4,8};

    for(int i = 0; i < 7/2; i++) {
        int temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }

    std::cout << "(";
    for(int i = 0; i < 7; i++) {
        std::cout << arr[i] << ",";
    }
    std::cout << ")";

    return 0;
}