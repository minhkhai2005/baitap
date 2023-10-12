#include "iostream"
#include <_ctype.h>
#include <string>

using namespace std;

string capitalize(string str){
    str[0] = toupper(str[0]);
    for(int i = 0;i < str.length(); i++){
        if (str[i] == ' ') str[i + 1] = toupper(str[i + 1]);
    }
    return str;
}

int main(){
    string str;
    getline(cin,str);
    cout << capitalize(str);
    return 0;
}
