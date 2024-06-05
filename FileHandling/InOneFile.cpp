#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main() {
    string inputFile1, inputFile2, outputFile;
    cin >> inputFile1>>inputFile2>> outputFile;
    ifstream file1(inputFile1), file2(inputFile2);
    ofstream outputFileStream(outputFile);
    string line;
    while (getline(file1, line)) outputFileStream << line << endl;
    while (getline(file2, line))  outputFileStream << line << endl;
    cout<<inputFile1<<" and "<<inputFile2<<" merged into "<<outputFile<<endl;
}
