//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
   //tratamos de imprimir primero todos los números pares, luego el número y después los impares
        for(int i = 2; i<=n;i= i+2){
            cout<<i <<" ";
        }
        for (int i = 1; i <= n; i = i + 2) {
            cout << i << " ";
        }
    return 0;
}