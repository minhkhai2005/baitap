#include "iostream"

using namespace std;

void Input(int arr[], int length){
    for (int i = 0; i < length; i++) {
        cin >> arr[i]; 
    }
}

int largestNumberIndex(int arr[], int length){
    int index = 0;
    for (int i = 0; i  < length; i++) {
        if (arr[i] > arr[index]) index = i; 
    }
    return index;
}

int smallestNumberIndex(int arr[], int length, bool filtered){
    int index = largestNumberIndex(arr, length);
    for (int i = 0; i  < length; i++) {
        if (arr[i] < arr[index] && (arr[i] != 0 || !filtered)) index = i; 
    }
    return index;
}

void fun01(int arr[], int length){
    arr[largestNumberIndex(arr, length)] = 0; 
    arr[smallestNumberIndex(arr, length, false)] = 0;
    cout << arr[largestNumberIndex(arr, length)] << ' ' << arr[smallestNumberIndex(arr, length, true)];
}

int main(){
    int N[9999], length;
    cin >> length;
    Input(N, length);
    fun01(N, length);
    return 0;
}
