#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 1, 4, 2};

    printArray(arr, 5);
    cout << "Unique element: " << findUnique(arr, 5) << endl;
    return 0;
}