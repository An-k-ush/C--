#include<bits/stdc++.h>
using namespace std;

bool checkifpalv2(string str, int start, int end) {
    if(start >= end) {
        return true;
    }
    if(str[start] != str[end]) {
        return false;
    }
    start++;
    end--;
    return checkifpalv2(str, start, end);
}
bool checkifpal(string str) {
    return checkifpalv2(str, 0, str.length() - 1);
}
int main() {
    string str = "dadedad";
    cout << checkifpal(str)<<endl;
    
}