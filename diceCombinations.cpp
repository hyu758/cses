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
const string dir = "RDLU";
// R, D, L, U
 
// const ll N = 2000000;
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
ll dp[1000005];
const ll M = 1e9 + 7;
ll solve(int n){
    if (dp[n]) return dp[n];
    for (int i=1; i<=6; i++){
        if (n - i >=0){
            dp[n]+=solve(n - i);
            dp[n]%=M;
        }
    }
    return dp[n];
}
int main(){
	fastIn;
    int n;
    cin>>n;

    dp[0] = 1;
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=6; j++){
    //         ll tmp = i - j;
    //         if (tmp>=0){
    //             dp[i] += dp[tmp];
    //             dp[i]%=M;
    //         }
            
    //     }
    // }
    cout<<solve(n);
    return 0;
}
