#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
ll a[N];
// const int M = 998244353;
// ll m = 1e9+7;

void solve()
{
	string s;
	cin>>s;
	if (s == "abc" || s == "acb" || s == "bac" || s == "cba") {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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