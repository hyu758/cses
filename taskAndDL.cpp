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
    int x, y;
    vector<pair<int, int>> v1, v2;
    for (int i=0; i<n; i++){
        cin>>x>>y;
        v1.pb({x,y});
        v2.pb({y,x});
    }
    ll sum1 = 0 , sum2 = 0;
    ll t = 0;
    sort(all(v1));
    sort(all(v2));
    for (auto x:v1){
        t+=x.fi;
        sum1+=x.se - t;
        // cout<<t<<" "<<sum1<<nl;
    }
    t = 0;
    for (auto x:v2){
        t+=x.se;
        sum2+=x.fi - t;
    }
    cout<<max(sum1,sum2);
    return 0;
}
