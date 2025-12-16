#include<iostream>
using namespace std;
int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    cout << "Array elements in reverse order are: ";
    for(int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}