#include "iostream"
#include <chrono>
#include <thread>

using namespace std;
void Input(int arr[], int length){
    for (int i = 0; i < length; i++) {
        cin >> arr[i]; 
    }
}
bool isChild(int parent[], int n, int child[], int m){
    bool isIncluded = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            if (child[i] == parent[j]) isIncluded = true;
        }
        if (!isIncluded) return false; 
        isIncluded = false;
    }
    return true;
}
int main(){
    int A[9999], B[9999], n, m;
    cin >> n >> m;
    Input(A, n);
    Input(B, m);
    cout << isChild(A, n, B, m);
    return 0;
}
