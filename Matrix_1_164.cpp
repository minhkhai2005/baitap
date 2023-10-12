#include "iostream"

using namespace std;

bool is_prime(int n){
    if (n == 0 || n == 1) return false;
    for(int i = 2; i*i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

void Input_2Dimension(int a[100][100], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout <<"Nhap gia tri dong thu " << i + 1 <<" cot thu " << j + 1 << ": ";
            cin >> a[i][j];
            if (!is_prime(a[i][j])){
                cout << "Khong phai so nguyen to, hay nhap lai" << endl;
                i = -1; j = -1; break;
            }
        }
    }
}

int main(){
    int a[100][100], n,m;
    cout << "Nhap so dong: "; cin >> n;
    cout << "Nhap so cot: "; cin >> m;
    Input_2Dimension(a, n, m);
    return 0;
}
