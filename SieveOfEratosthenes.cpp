#include<iostream>
#include<vector>
#include<math.h>
void soe(int n) {
    if(n<2) {
        return;
    }
    std::vector<bool>flag(n,n+1);
    flag[0]=false;
    flag[1]=false;
    for(int i = 2; i < n+1; i++) {
        if(!flag[i]) {
            continue;
        }
        else if(i <= sqrt(n)) {
            for(int j = i; (i*j) <= n; j++) {
                int k = i*j;
                flag[k]= false;
            }
        }
        std::cout<<i<<"\n";
    }
}

int main() {
    int n;
    std::cin >> n;
    soe(n);
    return 0;
}