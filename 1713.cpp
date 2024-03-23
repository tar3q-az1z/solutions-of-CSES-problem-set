#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
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
int main(){
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		int cnt = 0;
		for(int i = 1; i * i <= x; ++i){
			if(x % i == 0){
				++cnt;
				if(i != x/i){
					++cnt;
				}
			}
		}
		cout << cnt << ln;
	}
	return 0;
}