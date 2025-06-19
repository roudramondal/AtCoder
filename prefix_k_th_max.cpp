/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 19 / 2025
   Time  : 18:33
   Problem Link: https://atcoder.jp/contests/abc234/tasks/abc234_d
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define pll pair<<ll ,ll>

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // code here 
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (auto &x:v){
        cin>>x;
    }
     priority_queue<int,vector<int>,greater<int>>pq;
     for (auto p:v){
        pq.push(p);
        if (pq.size()>k){
            pq.pop();
        }
        if (pq.size()==k){
            cout<<pq.top()<<nl;
        }
     }
}

int main() {
    fast_io;
    //int t;
    // cin >> t;
    // while (t--) {
        solve();
    //}
    return 0;
}