#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
ll a[N];
// const int M = 998244353;
// ll m = 1e9+7;

void solve()
{
	ll n, m, x;
    cin >> n >> m >> x;
    ll L = m * (m + 1) / 2;
    ll R = (n - m + 1 + n) * m / 2;
    if (x >= L && x <= R) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t = 1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}