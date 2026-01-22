//https://cses.fi/problemset/task/1623
// utiilizamos recursión

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans = LLONG_MAX;
ll total_sum = 0;
vector<ll> numbers;
int n;
void solve (ll x, ll current_sum){
   if (x == n) {//si llegó al final
        ll other_sum = total_sum - current_sum;
        ans = min(ans, abs(current_sum - other_sum));
        return;
    }
    // op 1: colocar en el primer grupo
    solve(x + 1, current_sum + numbers[x]);
    //op 2: colocar en el segundo grupo
    solve(x + 1, current_sum);
}

int main() {
    cin>>n;
    numbers.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i]; //agregamos al vector
        total_sum += numbers[i];
    }
    solve(0,0);
    cout<<ans<<endl;
    return 0;
}