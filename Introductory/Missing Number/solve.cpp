//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int c = n-1;
    vector<int> numbers(n);
    for(int i = 1; i<n; i++){
        cin>>numbers[i];
    }
    sort(numbers.begin(), numbers.end());

    int faltante=0;
    for(int i = 1; i<=n; i++){
        if(numbers[i] != i){
            faltante = i;
            break;
        }
    }
    cout<<faltante;
    return 0;
}