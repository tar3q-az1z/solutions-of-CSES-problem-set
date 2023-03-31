#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define newline cout << ln
const int MOD = 1000000007;
 
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
	lli n;
	cin >> n;
	while(n != 1){
		cout << n << ' ';
		if(n % 2) n = (n * 3) + 1;
		else n /= 2;
	}
	cout << n << ln;
	return 0;
}