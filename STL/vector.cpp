#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    vector <int> v; // At Starting Capacity of vector is Zero
    v.push_back(1);
    cout << "Capacity = " << v.capacity() << endl; // Capacity increased to 1 and then starts doubling whenever it gets filled and new element comes
    v.push_back(2);
    cout << "Capacity = " << v.capacity() << endl; // Capacity increased to 2
    v.push_back(3);
    cout << "Capacity = " << v.capacity() << endl; // Capacity increased to 4
    cout << "Size = " << v.size() << endl; // Size refers to the number of elements present whereas capacity is how much space is assigned to the vector
    cout << v[2] << endl;
    v.pop_back();
    cout << "Capacity = " << v.capacity() << endl;
    cout << "Size  = " << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    v.push_back(5);
    for(int i:v) {
        cout << i << " ";
    }
    
    cout << endl;
    v.clear();
    cout <<"Size = " << v.size();
}