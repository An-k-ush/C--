#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string str) {
    vector<int>hash(260,0);
    int ans = 0;
    int l = 0, r= 0;
    hash[str[0]]++;
    while(r < str.length()) {
        hash[str[r]]++;
        if(hash[str[r]]==2) {
            while(hash[str[r]]==2) {
                hash[str[l]]--;
                l++;
            }
        } 
        int len = r-l+1;
        ans = max(ans,len);
        r++;
    }
    return ans;
}
int main() {
    string str;
    cin>>str;
    vector<int>hash(260,0);
    int ans = 1;
    int l = 0, r= 1;
    hash[str[0]]++;
    while(r < str.length()) {
        hash[str[r]]++;
        if(hash[str[r]]==2) {
            while(hash[str[r]]==2) {
                hash[str[l]]--;
                l++;
            }
        } 
        int len = r-l+1;
        ans = max(ans,len);
        r++;
    }
    cout<<ans;
}