#include "iostream"
#include <string>

using namespace std;

int word_counting(string str){
    int total_word = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            continue;
        }else {
            total_word++;
        } 
    }
    return total_word;
}

int main(){
    string str;
    getline(cin, str);
    cout << word_counting(str);
    return 0;
}
