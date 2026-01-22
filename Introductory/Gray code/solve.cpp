//

#include <bits/stdc++.h>
using namespace std;
vector<string> solve (int n){
    vector<string> result;
    int total = 1 << n; // combinaciones
    for (int i = 0; i<total; i++) {
        int shifted = i >> 1; // desplazamiento
        int gray=i^shifted; // fórmula Gray
        string b = "";
        for (int j = n-1; j>= 0;j--) {
            int mask =1<< j;
            if (gray & mask) { //si son 1
                b +='1';
            }else{
                b +='0';
            }
        }
        result.push_back(b);
    }
    return result;
}

int main() {
    int n; cin>>n;
    vector<string> sol = solve(n);
    for(string b: sol){
        cout<<b<<endl;
    }
    return 0;
}