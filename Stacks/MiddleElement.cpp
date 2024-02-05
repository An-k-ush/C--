#include<bits/stdc++.h>
using namespace std;

int midd(stack<int> &s,int si_ze) {
    if(s.empty()) {
        return -1;
    }
    if( s.size() - si_ze == 1) {
        return s.top();
    }
    int temp = s.top();
    s.pop();
    int ans =  midd(s,si_ze);
    s.push(temp);
    return ans;
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    cout << midd(s,s.size()/2)<<"\n";
    cout << s.top();

}