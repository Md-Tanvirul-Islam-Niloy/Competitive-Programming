#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl "\n"
#define ll long long
#define Maige ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define read(v) for(auto& tem : v) cin >> tem
#define print(v) for(auto tem : v) cout << tem << ' '; cout << endl
#define precision(n) fixed << setprecision(n)
#define sroting(v) v.begin(),v.end()

#define fi first
#define se second
#define sort_kortesi(v) sort (v.begin(), v.end())
#define vec(int) vector<int> 

#define boro_sort_kortesi(v) sort (v.begin(), v.end(), greater<int>())
#define cholse_loop(lim) for(int i = 0; i < lim; i++)
#define value_soho_cholse_loop(i, j, lim) for(int i = j; i < lim; i++)
#define value_soho_cholse_loop_ulta(i, j) for(int i = j - 1; i >= 0; i--)

#define khela_sesh return 0

void solve() { 
    int l, r, x; cin >> l >> r >> x;
    int a, b; cin >> a >> b;
    if ( a == b) {
        cout << 0 << endl;
    } else if ( abs(a - b) >= x) {
        cout << 1 << endl;
    } else if ( (abs (b - r) >= x and abs (a - r) >= x) or (abs (b - l) >= x and abs (a - l) >= x)) {
        cout << 2 << endl;
    } else if ( (abs (a - l) < x and abs (a - r) < x) or (abs (b - l) < x and abs (b - r) < x)){
        cout << -1 << endl;
    } else {
        cout << 3 << endl;
    }
}

int main()
{
    Maige;
    #ifndef ONLINE_JUDGE  
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w",stdout);
    #endif
    int test_case; cin >> test_case;
    while (test_case--) {
        solve();
    }
    khela_sesh;
}
