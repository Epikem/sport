#include <sstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<ctime>
#include<cmath>
#include<map>
#include<unordered_map>
#include<stack>
#include<random>
#include<queue>
#include<list>
#include<math.h>
#include<cstring>
using namespace std;
const long long int INF = 2000000000000000000;
#define ll long long int
#define ld long double
//#define key pair<ld,ld>
#define ii pair<int,int>
//#define si set<int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vvii(h,w,v) vvi(h, vi(w, v));	// initialize vvi
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 1000000007
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(t) cin>>t; for(int tmpv = 0; tmpv < t; tmpv++)
#define writeLine(arg) cout << arg << '\n'
#define pairof(type) pair<type, type>
#define vit std::vector<int>::iterator

using ds = int;

//permanent constants
const ld pi = acos(-1.0);
const ld log23 = 1.58496250072115618145373894394781;
const ld eps = 1e-8;
//const ll INF = 1e18 + 239;
const ll prost = 239;
const int two = 2;
const int th = 3;
const ll MOD = 998244353;
const ll MOD2 = MOD * MOD;
const int BIG = 1e9 + 239;
const int alf = 26;
const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
const int dxo[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
const int dyo[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int dig = 10;
const int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const int digarr[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
const int bt = 31;

//ds MOD(ds a, ds b)
//{
//	if (a > b)
//		return a - b;
//	else
//		return b - a;
//}
ds max3(ds a, ds b, ds c)
{
	return max(c, max(a, b));
}
ds min3(ds a, ds b, ds c)
{
	return min(a, min(b, c));
}
ds power(ds x, ds y)
{
	ds res = 1;
	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % mod;
		y = y >> 1;
		x = (x*x) % mod;
	}
	return res;
}
ds logg(ds a)
{
	ds x = 0;
	while (a > 1)
	{
		x++;
		a /= 2;
	}
	return x;
}
ds gcd(ds a, ds b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

ll n;

void solve(){
	cin >> n;

	//242 = 2*121 = 2*11*11
	// 242 - 2 = 240
	// 240 - 2 = 238 ...
	// 245 - 5 = 240
	// 241

	// 2 - 0
	// 3 - 0
	// 4 - 2 - 0
	// 5 - 0
	// 6 - 4 - 2 - 0
	// 7 - 0
	// 8 - 6 - 4 - 2 - 0
	// 9 - 6 - 4 - 2 - 0
	// 10 - 8 - 6 - 4 - 2 - 0
	// 11 - 0
	// 12
	// 13
	// 14 - 12..
	// 15 - 12 - ...
	// 16 - ...
	// 17 
	// 18 

	//25 20
	ll ans = 0;
	while (n != 0) {
		ll div = 2;
		while (n % div != 0 && div*div <= n) {
			div++;
		}
		if (div * div > n) {
			ans++;
			break;
		}
		if (div == 2) {
			ans += n / div;
			break;
		}
		n -= div;
		ans++;
	}

	cout << ans << endl;
	
}

int main()
{
	fastio;
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);
#endif
	solve();
	return 0;
}
