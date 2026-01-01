//https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; cin>>n;
    map<char,int> freq;
    char aux = n[0];
    int cont = 0;
    int m = -111;
    for (char c: n) {
        if(aux == c) cont++;
        if(aux != c){
            cont = 1; 
            aux = c;
        }
        m = max(cont,m);
    }
    
    cout<<m<<endl;
    return 0;
}