/*
    ei sol ta te protibar chek kortesi je ekhn ami jei number tar count ber korlam 
    oita ki or ager number thek besi bar ase naki thakle joto bar besi ase oita 
    add kore nite hobe! {eikhane obossoi ager number take current number theke 1 
    choto hoite hobe }[First if line no: 52]
    ar seciond if e jodi current number ager number theke 1 choto na hoy tahole
    oi number ta joto bar ase sob bar add kore nite hobe! [else line no: 54] 
*/

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
    int n; cin >> n;
    vec(int) v(n); read(v);
    
    int ans = 0;

    sort_kortesi(v);
    int last = v[0], last_cnt = 0, i = 0; 

    while (i < n)  {

        int j = i, cur = v[i] , cnt = 0;
        while ( j < n && v[j] == cur) {
            cnt++;
            j++;
        }
            
        if ( cur == last + 1) {
            ans += max(0, cnt - last_cnt);
        } else {
            ans += cnt;
        }

        last = cur;
        last_cnt = cnt;
        i = j;
    }
    cout << ans << endl;

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
