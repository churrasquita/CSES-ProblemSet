//https://cses.fi/problemset/task/1755 

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& str){
    for(int i = 0; i<str.size(); i++){
        if(str[i] != str[str.size()-1-i]){
            return false;
        }
    }
    return true; 
}

int main() {

    string n; cin>>n;
    map<char,int> freq;
    //vemos la frecuencia de cada char 
    for(char c: n){
        freq[c]++;
    }
    int odd = 0;
    string m = ""; //middles
    for(auto x : freq){
        if((x.second%2)!=0){ //si es impar
            odd++;
            m +=x.first;
            freq[x.first]--;
        }
    }
    // si hay más de un impar no existe solución
    if(odd>1){ 
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string begin = ""; //string del frente 
    for(auto x:freq){
        for(int k= 0; k<x.second/2;k++){
            begin +=x.first;
            freq[x.first]--;
        }
    }
    // string final 
    string end = "";
    for(auto x : freq){
        for(int k=0; k<x.second; k++){
            end+= x.first;
            freq[x.first]--;
        }
    }
    reverse(end.begin(), end.end());// ya que lo agregamos al revés

    string sol = begin + m + end;
    bool palindrome = isPalindrome(sol);

    if(palindrome){
        cout<<sol<<endl;
    }else{
        cout<<"NO SOLUTION"<<endl;
    }

    return 0;
}