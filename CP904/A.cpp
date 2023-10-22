#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
ll a[N];
// const int M = 998244353;
// ll m = 1e9+7;

int sum(int n) {
	int res = 0;
	while(n) {
		res += (n%10);
		n /= 10;
	}
	return res;
}

void solve()
{
	int n,k;
	cin>>n>>k;
	while(true) {
		int x = sum(n);
		if(x%k == 0) {
			cout<<n<<endl;
			return;
		}
		n++;
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