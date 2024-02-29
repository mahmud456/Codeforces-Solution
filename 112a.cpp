#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0,b=0;
    string f,s;
    cin>>f>>s;

    for(int i=0;i<f.size();i++){

        if(f[i]<=90 && f[i]>=65) a=f[i];
        else a=(f[i]-32);
        if(s[i]<=90 && s[i]>=65) b=s[i];
        else b=(s[i]-32);

        if(a!=b) break;
    }
    if(a>b) cout<<1;
    else if(a<b) cout<<-1;
    else cout<<0;
}
