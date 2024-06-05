#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main() {
    ifstream in("Eg.txt");
    int nC = 0, nL = 0, nW = 0;
    while(!in.eof()) {
        string str;
        getline(in, str);
        nL++;
        nC += str.length();
        stringstream ss(str);
        string word;
        while(ss>>word) {
            nW++;
        }


    }
    in.close();
    cout<<nC<<" "<<nL<<" "<<nW;

}