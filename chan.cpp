/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
for
while
###End banned keyword*/

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

//###INSERT CODE HERE -

int tong_le (int n){
    if (n == 0) return 0;
    return (to_string(n).length()%2==0?0:n%10) + tong_le(n/10);
}
int main(){
    return 0;
    int n;
    cin >> n;
    cout << tong_le(n);
    tong_le(n);
}
 

