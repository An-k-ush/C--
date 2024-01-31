#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    set<int> s1;
    s1.insert(10);
    s1.insert(4);
    s1.insert(1);
    s1.insert(5);
    s1.insert(9);
    s1.insert(20);
    s1.insert(30);
    for(auto& i : s1) {
        cout << i<<" ";
    }
    cout << "\n";
    set<int>::iterator it = s1.begin();
    it++;
    s1.erase(it);
    for(auto& i : s1) {
        cout << i<<" ";
    }
    it = s1.find(5);
    s1.erase(it);
    s1.swap(s);
    cout <<"\n";
    for(auto& i : s1) {
        cout << i<<" ";
    }
    cout << "\n";                    // Unordered Set takes more time
    for(auto& i : s) {
        cout << i<<" ";
    }
                                  
    int arr[] = {1,23535,3,64,23,722,3353};
    cout << "\n";
    set<int> s2(arr, arr+3);
    for(auto& i : s2) {
        cout << i << " ";
    }
}