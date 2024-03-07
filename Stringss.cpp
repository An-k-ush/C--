#include<bits/stdc++.h>
using namespace std;

    bool equalFrequency(string word) {
        vector<int> arr(26,0);
        for(int i = 0; i < word.size(); i++) {
            arr[(int)word[i]-97]++;
        }
        int count = 0;
        sort(arr.begin(),arr.end());
        for(int i = arr.size()-1; i>=0; i++) {
            if(arr[arr.size()-2] == 0) {
                return true;
            }
            if(arr[i-1]==0) break;
            if(arr[i] == arr[i-1]) continue;
            if(arr[i]-arr[i-1] != 1) return false;
            if(arr[i]-arr[i-1] == 1) count++;
        }
        if(count==1) {
            return true;
        }
        else {
            return false;
        }
    }
int main() {
    string str = "aabc";
    cout << equalFrequency(str);
}