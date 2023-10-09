#include<bits/stdc++.h>
using namespace std;
int main() {
    float k;
    int j;
    for(int i = 1; i < 31; i++) {
        for(j = i ; j < 31; j++) {
            k = sqrt(i*i+j*j);
            if(k==(int)k) {
            cout << i<< " "<< j << " "<< k<<endl;
        }
        }
        
    }
}