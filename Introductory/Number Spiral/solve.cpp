//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin>> t;
    while(t--){
        ll y,x; cin>>y>>x;
        if(y == 1 && x ==1){cout<<1<<endl;}
        else if(y>x){
            ll ans= (y-1)*(y-1);
            ll add = 0; 
            if(y%2!=0){//vemos si es par o impar
                add =x;
            }
            else {
                add = 2*y-x;
            }
            cout<<ans+add<<endl;
        }
        //de otro modo, la columna es nuestro límite
        else{
            ll ans = (x-1)*(x-1);
            ll add = 0;
            if(x%2==0){//si es par
                add=y;
            }else{
                add = 2*x-y;
            }
            cout<<ans+add<<endl;
        }
    }
    
    return 0;
}