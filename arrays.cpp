#include<iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}