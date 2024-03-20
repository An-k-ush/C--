#include<bits/stdc++.h>
using namespace std;

void revstr(string& str) {
    for(int i = 0; i < str.size()/2; i++) {
        char temp = str[i];
        str[i]= str[str.size()-1-i];
        str[str.size()-1-i] = temp;
    }
}

string convert_to_bin(int n) {
    string str;
    while(n>1) {
        if(n%2) str.push_back('1');
        else str.push_back('0');
        n/=2;
    }
    if(n==1) str.push_back('1');
    else str.push_back('0');
    revstr(str);
    return str;
}

int main() {
    int n;
    cin>>n;
    string str = convert_to_bin(n);
    cout<<str;
}