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
// Knight
// int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// R, D, L, U

// const ll N = 2000005;
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

// int mod(string num, int a)
// {
//     // MOD BIG NUM
//     int res = 0;
 
//     // One by one process all digits of 'num'
//     for (int i = 0; i < num.length(); i++)
//         res = (res * 10 + num[i] - '0') % a;
 
//     return res;
// }




 
int main(){
	fastIn;
	int n;
	cin>>n;
	vector<pair<pair<int, int>, int>> v;
	int x, y;
	vector<pii> color;
	for (int i=0; i<n; i++){
	    cin>>x>>y;
	    v.pb({{x, y}, i});
	}
	sort(all(v));
	vi fir, sec;
	for (auto x:v){
	    fir.pb(x.fi.fi);
	    sec.pb(x.fi.se);
	    color.pb({x.se, -1});
	}
	
	int cnt = 1;
	for (int i=0; i<n; i++){
	    if (color[i].se==-1){
	        color[i].se = cnt;
	        int pos = upper_bound(all(fir), sec[i]) - fir.begin();
	        while (pos!=n){
	            color[pos].se = cnt;
	            pos = upper_bound(all(fir), sec[pos]) - fir.begin();
	        }
	        ++cnt;
	    }
	    else continue;
	}
	cout<<cnt-1<<nl;
	sort(all(color));
	for (int i=0; i<n; i++){
	    cout<<color[i].se<<" ";
	}
	
}
