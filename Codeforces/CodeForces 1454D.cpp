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

#define f first
#define s second
#define sort_kortesi(v) sort (v.begin(), v.end())
#define vec(int) vector<int> 

#define boro_sort_kortesi(v) sort (v.begin(), v.end(), greater<int>())
#define cholse_loop(lim) for(int i = 0; i < lim; i++)
#define value_soho_cholse_loop(i, j, lim) for(int i = j; i < lim; i++)
#define value_soho_cholse_loop_ulta(i, j) for(int i = j - 1; i >= 0; i--)

#define khela_sesh return 0

void solve() {
    ll n; cin >> n;

    ll siz = sqrt( n );
    map<int, int> m;
    for (ll i = 2; i <= siz; ++i)
    {
        ll tem = n, cnt = 0;;
        while (tem % i == 0)
        {
            tem /= i;
            cnt++;
        }
        m[i] = cnt;
    }
    
    if (n > 1) m[n]++;
    int val, oc = 0;
    ll ans = 1;
    
    
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        if (it->s > oc) {
            oc = it->s;
            val = it->f;
        }
    }
    cout << oc << endl;
    for (int i = 1; i < oc; ++i)
    {
        cout << val << ' ';
        ans *= val;
    } cout << n / ans << endl;
}

int main()
{
    Maige;
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    
    khela_sesh;
}
