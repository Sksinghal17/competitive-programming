#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
ll a[N];
// const int M = 998244353;
// ll m = 1e9+7;



void solve() {
    ll n; 
    cin>>n;
    string s; 
    cin>>s;
    ll possum = 0, idsum = 0;
    vector<ll> ans;
    reverse(s.begin(), s.end());
    for (ll i = 0; i < n; ++i) {
        if (s[i] == '0') {
            possum += i;
            idsum += (int)ans.size();
            ans.push_back(possum - idsum);
        }
    }
    while ((ll)ans.size() < n) {
        ans.push_back(-1);
    }
 
    for (ll i : ans) {
        cout<<i<<' ';
    }
    cout<<endl;
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