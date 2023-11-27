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
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    int n, x;
    cin>>n>>x;
    int p[n+1];
    int v[n+1];
    for (int i=1; i<=n; i++) cin>>p[i];
    for (int i=1; i<=n; i++) cin>>v[i];
    int dp[n+1][x+1];
    memset(dp, 0, sizeof(dp));
    for (int i=1; i<=n; i++){
        for (int j=1; j<=x; j++){
            dp[i][j] = dp[i-1][j];
            if (j >= p[i]){
                dp[i][j] = max(dp[i][j], dp[i-1][j - p[i]] + v[i]);
            }
        }
    }
    // for (int i=0; i<=n; i++){
    //     for (int j=0; j<=x; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }
    cout<<dp[n][x];
    return 0;
}

