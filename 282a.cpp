#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    string s;
    cin>>n;
    for(;n>0;n--){
            cin>>s;
        if(s =="++X"|| s =="X++")
            x++;
        else
            x--;
    }
    cout<<x;
}

