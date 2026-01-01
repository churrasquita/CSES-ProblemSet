//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin>> n;
    vector<ll> numbers(n);
    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }
    ll mov = 0;
    ll aux = 0;

    for(int i = 1; i<n; i++){
        ll x = numbers[i];
        ll y = numbers[i-1];
        if(x<y){
            ll aux2 = 0;
            while(x<y){
                x ++;
                aux2++;
            }
            aux += aux2;
            mov += aux;
            numbers[i]+=aux;
        }
        aux = 0;
    }
    cout<<mov;
    return 0;
}