#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0,b=0,c=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size();i+=2){
        if(s[i]=='1') a++;
        else if(s[i]=='2') b++;
        else c++;
    }
    for(int i=a+b+c; i>0 ;i--){
        if(a!=0) {cout<<1; a--;}
        else if(b!=0) {cout<<2; b--;}
        else {cout<<3; c--;}

        if(i!=1) cout<<'+';
    }
}
