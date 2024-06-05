// #include<bits/stdc++.h>
// using namespace std;

// int sol_ve(vector<vector<int>>&dp,vector<int>&val, vector<int>&wt, int w, int i) {
//     // base_case
//     if(i==val.size()-1) {
//         if(wt[i]<= w) return val[i];
//         else return 0;
//     }
//     if(dp[i][w]!=-1) return dp[i][w];

//     //logic
//     int _notpick = 0 + sol_ve(dp,val,wt,w,i+1);
//     int pick = 0;
//     if(wt[i]<=w) {
//         pick = val[i] + sol_ve(dp,val,wt,w-wt[i],i+1);
//     }
//     return dp[i][w] = max(pick,_notpick);
// }

// int solve(int n, vector<int>&val, vector<int>&wt, int w) {
//     vector<vector<int>>dp(n,vector<int>(w+1,-1));
//     return sol_ve(dp,val,wt,w,0);
// }

// int main() {
//     int n = 4;
//     int w = 5;
//     vector<int>val = {5,4,8,6};
//     vector<int>wt = {1,2,4,5};
//     cout<<solve(n,val,wt,w);
// }



// #include <bits/stdc++.h>
// using namespace std;


// int sol_ve(vector<vector<int>>&dp,vector<int>&val, vector<int>&wt, int w, int i) {
//     // base_case
//     if(i==val.size()-1) {
//         if(wt[i]<= w) return val[i];
//         else return 0;
//     }
//     if(dp[i][w]!=-1) return dp[i][w];

//     //logic
//     int _notpick = 0 + sol_ve(dp,val,wt,w,i+1);
//     int pick = 0;
//     if(wt[i]<=w) {
//         pick = val[i] + sol_ve(dp,val,wt,w-wt[i],i+1);
//     }
//     return dp[i][w] = max(pick,_notpick);
// }

// int solve(int n, vector<int>&val, vector<int>&wt, int w) {
//     vector<vector<int>>dp(n,vector<int>(w+1,-1));
//     return sol_ve(dp,val,wt,w,0);
// }

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--) {
// 	    int n, w;
//         cin>>n>>w;
// 	    vector<int>val(n);
// 	    vector<int>wt(n);
// 	    for(int i = 0;i < n; i++) {
// 	        cin>>wt[i]>>val[i];
// 	    }
// 	    cout<<solve(n,val,wt,w)<<endl;
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const ll sz = 4e6 + 1;

// ll dp1[sz];
// ll dp2[sz];

// void solve()
// {
//     ll n, c;

//     cin >> n >> c;

//     vector<vector<ll>> arr(n, vector<ll>(2));

//     vector<vector<ll>> cost, value;

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<2; j++){
//             cin >> arr[i][j];
//         }

//         if(arr[i][0] < arr[i][1])
//             cost.push_back(arr[i]);

//         else
//             value.push_back(arr[i]);
//     }

//     // return;

//     ll mx = 1e15;

//     for(int i = 0; i<sz; i++){
//         dp1[i] = mx;
//         dp2[i] = 0;
//     }

//     dp1[0] = 0;

//     // return;

//     for(auto i: value){
//         for(int j = sz-1; j>=0; j--){
//             if(j < i[1])
//                 continue;
//             dp1[j] = min(dp1[j], dp1[j - i[1]] + i[0]);
//         }
//     }

//     // return;

//     for(auto i: cost){
//         for(int j = sz-1; j>=0; j--){
//             if(j < i[0])
//                 continue;

//             dp2[j] = max(dp2[j], dp2[j - i[0]] + i[1]);
//         }
//     }

//     // return;

//     for(int i = 1; i<sz; i++){
//         dp2[i] = max(dp2[i], dp2[i-1]);
//     }

//     ll ans = 0;

//     // return;

//     for(ll i = 0; i<sz; i++){
//         ll currCost = dp1[i];
//         if(currCost > c)
//             continue;
//         ll rem = c - currCost;
//         rem = min(rem, sz - 1ll);
//         ans = max(ans, i + dp2[rem]);
//     }

//     cout << ans << '\n';
// }

// int main() {

//     cout << fixed << setprecision(9) ;
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     ll t = 1;
//     cin>>t;
//     for(int i = 1; i<=t; i++) {
//         // cout << "Case " << i << ": " ;
//         solve() ;
//     }
// }



#include <bits/stdc++.h>
using namespace std;
 
#define V_SUM_MAX 1000
#define N_MAX 100
#define W_MAX 10000000
 
// Function to return the maximum weight
int maxWeight(vector<int>& w, vector<int>& val, int n,
              int c)
{
    // Initialize dp array
    int dp[V_SUM_MAX + 1][N_MAX + 1];
    for (int i = 0; i <= V_SUM_MAX; i++)
        for (int j = 0; j <= n; j++)
            dp[i][j] = W_MAX;
 
    // Base case initialization
    for (int i = 0; i <= n; i++)
        dp[0][i] = 0;
 
    // iterate over subproblems ans get
    // the current value from previous computation
    for (int i = 1; i <= V_SUM_MAX; i++)
        for (int j = 1; j <= n; j++)
            dp[i][j] = min(
                dp[i][j - 1],
                (i >= val[j - 1])
                    ? w[j - 1] + dp[i - val[j - 1]][j - 1]
                    : W_MAX);
 
    // Finding maximum value
    for (int i = V_SUM_MAX; i >= 0; i--)
        if (dp[i][n] <= c)
            return i;
 
    return 0;
}
 
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,w;
        cin>>n>>w;
        vector<int> wt(n);
        vector<int> val(n);
        for(int i = 0; i < n; i++) {
            cin>>wt[i]>>val[i];
        }
        cout << maxWeight(wt, val, n, w);
    }
    
 
    return 0;
}