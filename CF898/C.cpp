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
	int ans = 0;
	for(int i=0 ;i<10; i++) {
		cin>>s;
		for(int j=0; j<10; j++) {
			if(s[j] == '.') {
				continue;
			}
			ans += min({i + 1, 10 - i, j + 1, 10 - j});
		}
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