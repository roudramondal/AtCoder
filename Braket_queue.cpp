/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 06 / 06 / 2025
   Time  : 22:25
   Problem Link: 
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
    queue<string>q;
    q.push("( ");
    q.push(")");
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        string binary_of_i=q.front();
        q.pop();
        cout<<i<<" = "<<binary_of_i<<nl;
        if (i*2<=n)
        {
        q.push(binary_of_i+'(');
        q.push(binary_of_i+')');
        }
    }
    cout<<q.size()<<nl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}