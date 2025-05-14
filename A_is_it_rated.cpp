/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 14 / 2025
   Time  : 21:51
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define po pop_back
#define mx max()
#define min min()
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define co cout
#define c cin

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    // Your code here
    int r, k;
    c >> r >> k;
    if (r>=1600&&r<=2999&&k==1)
    {
      co << "Yes" << nl;
    }
    else if (r>=1200&&r<=2399&&k==2)
    {
      co << "Yes" << nl;
    }
    else
    {
      co << "No" << nl;
    }

}

int main() {
    fast_io;
    // int t ;
    // cin >> t;
    // while (t--) {
        solve();
    //}
    return 0;
}