#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
ll a[N];
// const int M = 998244353;
// ll m = 1e9+7;

void solve()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a, a + n);
	a[0]++;
	ll ans = 1;
	for(int i=0; i<n; i++) {
		ans = ans * a[i];
	}
	cout<<ans<<endl;
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