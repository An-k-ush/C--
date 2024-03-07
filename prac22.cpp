#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i  = 0; i < n; i++) {
        cin >> arr[i];
    }
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--) {
        int key;
        cin>>key;
        cout<<hash[key]<<endl;
    }

}

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "ENter the size of array: ";
    cin >> n;

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    int hashh[13]= {0};

    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while (q--)
    {
        
    int key;
    cin >> key;

    cout << hashh[key] << endl;
    }
    
    
    
    return 0;
}