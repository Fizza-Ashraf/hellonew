#include <iostream>
using namespace std;

int productOfPositiveNumbers(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) { 
        if (arr[i] > 0) {
            product *= arr[i];
        }
    }
    return product;
}

int main() {
    int arr[] = {1, -2, 3, 4, -5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    cout << productOfPositiveNumbers(arr, size);
    return 0;
}
