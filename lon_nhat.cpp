/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
for
while
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

//###INSERT CODE HERE -
int lon_nhat(int n){
    if (n == 0) return 0;
    return max(n % 10, lon_nhat(n / 10));
}

int main(){
    int n;
    cin >> n;
    cout <<n << " - " << lon_nhat(n);
    return 0;
}
 

