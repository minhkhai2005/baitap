#include "iostream"
#include <algorithm>
#include <cmath>
#include <mutex>
using namespace std;

int count(int n){
    int result = 0;
    while (n > 0) {
        n /= 10;
        result ++;
    }
    return result;
}

unsigned long long new_num(int n, int count){
    unsigned long long x, a = pow(10,count);
    x = (unsigned long long)(9*pow(10,count) - (unsigned long long)(n / pow(10,count))*a + n);
    while (true){
       x -= a;
       if(x % 3 == 0){
           return x;
       }
       if(x == n){
           count -= 1;
           x = (unsigned long long)(9*pow(10,count) - (unsigned long long)(n / pow(10,count))*a + n);
           a = pow(10,count);
       }
    }
}

int main()
{
    unsigned long long n;
    cin >> n;
    // cout << count(n);
    cout << new_num(n, count(n) - 1);
    return 0;
}
