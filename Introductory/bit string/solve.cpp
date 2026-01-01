//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

int main() {
    int n; cin>>n;
    ll ans = 1;
    ll base= 2ll;
    while(n){
         if(n & 1ll) {  
            ans = (ans * base) % MOD;
        }
        base = (base* base) % MOD;
        n >>= 1LL;
    }

    cout<<ans;

    return 0;
}