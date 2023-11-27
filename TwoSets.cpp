#include <bits/stdc++.h>
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimize("Ofast")
using namespace std;
typedef long long  ll;
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
const char nl = '\n';
const long long MOD = 998244353;
const double pi = 2.0 * acos(0.0);
const double EPS = 1e-6;
#define prec(n) fixed<<setprecision(n)
double DEG_to_RAD(double d) { return d * pi / 180.0; }
double RAD_to_DEG(double r) { return r * 180.0 / pi; }
inline ll gcd(ll a, ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a, ll b){return a/gcd(a,b)*b;};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
// U, R, D, L

// const ll N = 10000001;
// vector<bool> prime(N, 1);
// vll num;
// void sieve(){
// 	prime[0]=prime[1]=0;
// 	for (ll i=2;i*i<N;i++){
// 		if (prime[i]){
// 		    num.pb(i);
// 			for (ll j=i*i;j<N;j+=i){
// 				prime[j]=0;
// 			}
// 		}
// 	}
// }


ll f(ll x){
    return x*(x+1)/2;
}
int main(){
	fastIn;
	ll n;
	cin>>n;
	if (f(n)&1){
	    cout<<"NO";
	    return 0;
	}
	cyes;
	bool visited[1000001] = {false};
	vi res1, res2;
	ll sum = f(n)/2;
	while (sum > n){
	    sum-=n;
	    res1.pb(n);
	    visited[n] = true;
	    --n;
	}
	if (sum!=0){
	    res1.pb(sum);
	    visited[sum] = true;
	}
	for (int i=1; i<=n; i++){
	    if (!visited[i]) res2.pb(i);
	}
	cout<<res1.size()<<nl;
	for (auto x:res1) cout<<x<<" ";
	cout<<nl;
	cout<<res2.size()<<nl;
	for (auto x:res2) cout<<x<<" ";
    return 0;
}

