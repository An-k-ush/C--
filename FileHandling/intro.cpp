#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main() {
    string str = "Ankush is good boy";
    ofstream out("Eg.txt");
    out<<str;
    out.close();
    string str2;
    ifstream in("Eg.txt");
    getline(in, str2);
    cout<<str2<<endl;
}