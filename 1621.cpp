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
 
 
int main(){
	int n;
	unordered_set<int> s;
	s.max_load_factor(0.25);
	s.reserve(512);
	int val;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> val;
		s.insert(val);
	}
	cout << s.size() << ln;
	return 0;
}
 