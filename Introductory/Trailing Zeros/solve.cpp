//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin>>n;
    ll curr = 5;
    ll ans = 0;
    if(n==1)cout<<0;
    else{
        while(curr<=n) {
            ans += n/curr;
            curr*= 5;
        }
        cout<<ans<<endl;
        return 0;
    }
}