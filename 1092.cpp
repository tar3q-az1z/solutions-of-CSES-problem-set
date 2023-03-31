// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	lli n;
	cin >> n;
	lli total = n * (n + 1) / 2;
	if(total % 2) cout << "NO\n";
	else{
		cout << "YES\n";
		total /= 2;
		vector<lli> ans1, ans2; 
		for(lli i = n; i >= 1; --i){
			if(i <= total){
				ans1.push_back(i);
				total -= i;
			}else{
				ans2.push_back(i);
			}
		}
		cout << ans1.size() << ln;
		for(auto i : ans1) cout << i << ' ';
		cout << ln;
		cout << ans2.size() << ln;
		for(auto i : ans2) cout << i << ' ';
		cout << ln;
	}
	return 0;
}
