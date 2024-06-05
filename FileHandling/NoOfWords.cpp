#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;
    ifstream file(filename);
    string line;
    int wordCount = 0;
    while (getline(file, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) ++wordCount;}
    cout << "Number of words: " << wordCount << endl;
}