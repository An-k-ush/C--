#include<bits/stdc++.h>
using namespace std;
#define M 2e31
int main() {
    long long n,s,p,q;
    set<long long>st;
    st.insert(s);
    long long y = s;
    for(int i = 1; i < n; i++) {
        long long x = (y*p+q)%(long long)M;
        st.insert(x);
        y=x;
    }
    cout<<st.size();
    return 0;
}