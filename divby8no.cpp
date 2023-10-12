#include<bits/stdc++.h>
using namespace std;

string removeZero(string str) 
{ 
    int i = 0; 
    while (str[i] == '0') 
        i++;   
    str.erase(0, i); 
    return str; 
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        string s;
    	cin >> x >> s;
        s = removeZero(s);
        if(s.length() >= 3) {
            int y = (s[s.length() - 3] - 48)*100 + (s[s.length() - 2] - 48)*10 +s[s.length() - 1] - 48;
            if(y%8 == 0) {
                    y += 0;
                }
            else if(y%8 <= y%10) {
                y = y - (y%8);
            }
            else {
                y = y + 8 - (y % 8);
            }
            s[s.length() - 3] = (y/10)/10 + 48;
            s[s.length() - 2] = (y/10)%10 + 48;
            s[s.length() - 1] = y%10 + 48;
            cout << s;
        }
        else {
            int y = 0;
            for(int i = 0; i < s.length(); i++) {
                y = y*10 + (s[i] - 48);
            }
            if(y < 8 && y > 0) {
                cout << 8 << endl;
            }
            else if(y%8 == 0) {
                cout << y << endl;
            }
            else if(y%8 <= y%10) {
                y = y - (y%8);
                cout << y << endl;
            }
            else {
                y = y + 8 - (y % 8);
                cout << y << endl;
            }
        }
    }
}