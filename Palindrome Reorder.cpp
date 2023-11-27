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



int main(){
	fastIn;
	string s;
	cin>>s;
	map<char, int> mp;
	for (auto x:s) ++mp[x];
	int cnt = 0;
	for (auto x:mp){
	    if (x.se & 1){
	        ++cnt;
	    }
	}
	if (cnt > 1){
	    cout<<"NO SOLUTION";
	    return 0;
	}
	int n = s.size();
	vector<char> res(n);
	int i=0, j=n-1;
	for (auto &x:mp){
	    while (x.se>0){
	        if (x.se & 1){
	            res[n/2] = x.fi;
	            --mp[x.fi];
	        }
	        else{
	            res[i] = x.fi;
	            res[j] = x.fi;
	            ++i;
	            --j;
	            mp[x.fi]-=2;
	        }
	    }
	}
	for (auto &x:res) cout<<x;
    return 0;
}

