#include<iostream>
using namespace std;
const int MOD = 1000000007;
typedef long long int lli;
lli binpow(lli a, lli b){
    lli ans = 1;
    while (b){
        if(b % 2) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return ans;
}
int main(){
    lli a, b, n;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << binpow(a, b) << "\n";
    }
    return 0;
}