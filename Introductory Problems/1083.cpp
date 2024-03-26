// Author : Mars_Coder
// Date   : 26/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define FOR(a, b, c) for(auto i = a; i < b; i += c)
#define lli long long int

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	lli n;
	cin >> n;
	lli ai, sum = 0;
	for(int i = 0; i < n - 1; ++i){cin >> ai; sum += ai;}
	cout << ((n * (n + 1)) / 2) - sum << ln;
	return 0;
}