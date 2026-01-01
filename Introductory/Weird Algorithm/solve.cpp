//https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin>> n;
    vector<long long> numbers;
    while(n>1){
        numbers.push_back(n);
        if (n%2 == 0){
            n/=2;
        } else{
            n = (n*3) +1;
        }
       
    }
    numbers.push_back(1);
    for(long long num: numbers){
        cout<<num << " ";
    }
    return 0;
}