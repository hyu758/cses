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

int n,m;
char a[51][51];
int visited[51][51] = {0};
bool f = false;
void flood(int x, int y, int cnt){
    visited[x][y] = cnt;
    for (int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >=0 && ny < n && a[x][y] == a[nx][ny]){
            if (visited[nx][ny]==0){
                flood(nx, ny, cnt + 1);
            }
            else{
                if (visited[nx][ny] - cnt + 1 >= 4){
                    // cout<<nx<<" "<<ny<<" "<<x<<" "<<y<<nl;
                    // cout<<visited[nx][ny]<<" "<<cnt<<nl;
                    f =  true;
                    return;
                }
            }
            
        }
    }
}
int main(){
	fastIn;
	cin>>n>>m;
	for (int i=0; i<n; i++){
	    for (int j=0; j<m; j++){
	        cin>>a[i][j];
	    }
	}
	for (int i=0; i<n; i++){
	    for (int j=0; j<m; j++){
	        if (visited[i][j]==0){
	            flood(i,j,1);
	        }
	    }
	}
	for (int i=0; i<n; i++){
	    for (int j=0; j<m; j++){
	        cout<<visited[i][j]<<" ";
	    }
	    cout<<nl;
	}
	if (f) cout<<"Yes";
	else cout<<"No";
	
}

