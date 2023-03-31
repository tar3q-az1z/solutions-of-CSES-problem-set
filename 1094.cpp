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
	int n = 0;
	cin >> n;
	lli arr[n];
	lli moves = 0;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(i > 0){
			if(arr[i] < arr[i - 1]){
				moves += (arr[i - 1] - arr[i]);
				arr[i] = arr[i - 1];
			}
		}
	}
	cout << moves << ln;
	
	return 0;
}
 