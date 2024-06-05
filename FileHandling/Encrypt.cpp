#include<bits/stdc++.h>
#include <fstream>
using namespace std;
void encryptFile(const string& i, const string& o) {
    ifstream inFile(i);
    ofstream outFile(o);
    char ch;
    while (inFile.get(ch)) {
        ch +=1;
        outFile << ch;
    }
    cout << "Encrypted text saved to " << o << endl;
}
int main() {
    string inputFilename, outputFilename;
    cout << "Enter the name of the input file: ";
    cin >> inputFilename;
    cout << "Enter the name of the output file: ";
    cin >> outputFilename;
    encryptFile(inputFilename, outputFilename);
}
