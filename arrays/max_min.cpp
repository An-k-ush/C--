#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array = ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max_no = INT_MIN; //This is the minimum values of a int datatype. TO use this you have to include climits
    int min_no = INT_MAX; //This is the maximum values of a int datatype. TO use this you have to include climits
    for(int i = 0;i<n;i++){
        if(arr[i]>max_no){
            max_no = arr[i];
        }
        if(arr[i]<min_no){
            min_no = arr[i];
        }
    }
    cout<<"Maximum no is = "<<max_no<<endl;
    cout<<"Minimum no is = "<<min_no<<endl;
    
    return 0;
}